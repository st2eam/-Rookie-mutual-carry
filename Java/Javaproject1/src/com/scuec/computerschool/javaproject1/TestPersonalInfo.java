package com.scuec.computerschool.javaproject1;
import java.util.Scanner;
public class TestPersonalInfo {

	public static void main(String[] args)
	{
		System.out.println("输入身份证号");
		Scanner s = new Scanner(System.in);
		String Id = s.nextLine();
		PersonalInfo person = new PersonalInfo(Id);
		System.out.println("大家好，我的名字叫小C，今年"+person.age+"岁"
				+"，性别："+person.sex
				+"，生日是："+person.birthday
				+"，目前就读于"+person.profession
				+"，主要技能是："+person.skill
				+"，兴趣爱好是："+person.hobby);
	}
}
