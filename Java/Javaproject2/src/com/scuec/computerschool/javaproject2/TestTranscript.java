package com.scuec.computerschool.javaproject2;

import java.util.Scanner;

public class TestTranscript {
	public static void main(String[] args)
	{
		System.out.println("һ���ж��ٸ��γ̣�");
		Scanner s = new Scanner(System.in);
		int courseNumber = s.nextInt();
		Transcript tra = new Transcript(courseNumber);
		tra.Score_sort(courseNumber);
	}
}
