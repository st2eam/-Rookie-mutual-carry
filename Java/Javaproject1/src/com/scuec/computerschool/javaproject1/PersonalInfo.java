package com.scuec.computerschool.javaproject1;

public class PersonalInfo {

		PersonalInfo(String Id)
		{
			id = Id;
			birthday = getBirthday(Id);
			age = getAge(Id);
			sex = getSex(Id);
		}
		String getBirthday(String Id) 
		{
			String Bir = Id.substring(6, 14);
			return Bir;
		}
		int getAge(String Id)
		{
			String age_str = Id.substring(6,10);
			int age = 2021-Integer.valueOf(age_str).intValue();
			return age;
		}
		String getSex(String Id)
		{
			String Sex = "F";
			String str = Id.substring(16);
			int judge = Integer.valueOf(str).intValue();
			if(judge%2==0)Sex = "Ů";
			else Sex = "��";
			return Sex;
		}
	int age;
	String id;
	String birthday;
	String sex;
	String profession = "���������ѧ��ѧ�����ѧԺ�������רҵ";
	String skill = "C��C++��Java��Python��ǰ�˿��������ݿ⼼����";
	String hobby = "����/д����/����/��Ϸ/����/��Ӱ";
}
