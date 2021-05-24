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
			if(judge%2==0)Sex = "女";
			else Sex = "男";
			return Sex;
		}
	int age;
	String id;
	String birthday;
	String sex;
	String profession = "中南民族大学大学计算机学院软件工程专业";
	String skill = "C、C++、Java、Python、前端开发、数据库技术等";
	String hobby = "看书/写代码/篮球/游戏/旅游/电影";
}
