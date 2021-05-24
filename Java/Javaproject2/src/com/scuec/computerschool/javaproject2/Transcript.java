package com.scuec.computerschool.javaproject2;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Scanner;


public class Transcript {
	Transcript(int courseNumber)
	{	
		for(int i=1;i<=courseNumber;i++)
		{
			Scanner course_in = new Scanner(System.in);
			System.out.println("输入第"+i+"个课程的名称和分数");
			String str = course_in.nextLine();
			Double dou = course_in.nextDouble();
			if(dou>=0&&dou<=100)
			{
				Course.put(str,dou);
			}
			else
			{
				System.out.println("输入分数错误，请重新输入");
				Scanner new_in = new Scanner(System.in);
				Double newdou = new_in.nextDouble();
				Course.put(str,newdou);
			}
		}
	}
	public void Score_sort(int courseNumber)
	{
		List<Map.Entry<String, Double>> list = new ArrayList<Map.Entry<String, Double>>(Course.entrySet());
		Collections.sort(list, new Comparator<Map.Entry<String, Double>>() {
		public int compare(Entry<String, Double> o1, Entry<String, Double> o2) {
				return o1.getValue().compareTo(o2.getValue());//升序
				//return o2.getValue().compareTo(o1.getValue());//降序
			}
		});
		Double sum = 0.0;
		for(Map.Entry<String, Double> mapping : list) 
		{
			sum =  sum + mapping.getValue();
		}
		Double average = sum/courseNumber;
		System.out.println(String.format("平均分：%.2f",average));
		
		System.out.println("等级：A(90<n<=100),B(80<n<90),C(60n<80),D(n<60)");
		for (Map.Entry<String, Double> mapping : list) {
			System.out.print(mapping.getKey() + ":\t" + mapping.getValue());
			if(mapping.getValue()<60.0)
			{
				System.out.println("\t等级：D");
			}
			else if(mapping.getValue()>=60.0&&mapping.getValue()<80.0)
			{
				System.out.println("\t等级：C");
			}
			else if(mapping.getValue()>=80.0&&mapping.getValue()<90.0)
			{
				System.out.println("\t等级：B");
			}
			else if(mapping.getValue()>=90.0&&mapping.getValue()<=100.0)
			{
				System.out.println("\t等级：A");
			}
		}
	}
	public HashMap<String,Double> Course = new HashMap<String, Double>();
}
