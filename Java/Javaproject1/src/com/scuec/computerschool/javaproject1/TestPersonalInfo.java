package com.scuec.computerschool.javaproject1;
import java.util.Scanner;
public class TestPersonalInfo {

	public static void main(String[] args)
	{
		System.out.println("�������֤��");
		Scanner s = new Scanner(System.in);
		String Id = s.nextLine();
		PersonalInfo person = new PersonalInfo(Id);
		System.out.println("��Һã��ҵ����ֽ�СC������"+person.age+"��"
				+"���Ա�"+person.sex
				+"�������ǣ�"+person.birthday
				+"��Ŀǰ�Ͷ���"+person.profession
				+"����Ҫ�����ǣ�"+person.skill
				+"����Ȥ�����ǣ�"+person.hobby);
	}
}
