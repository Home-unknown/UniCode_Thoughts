/*
#include<iostream>
#include<string>
using namespace std;

//作用：结构体中的成员可以是另一个结构体
//例如：每个老师辅导一个学员，一个老师的结构体中，记录一个学生的结构体

struct student
{
	string  name;
	int age;
	int score;
};

struct teacher
{
	int id;					//教师编号
	string name;			//姓名
	int age;				//年龄
	struct student stu;		//辅导的学生
};

int main()
{
	teacher t;
	t.id = 10000;
	t.name = "老王";
	t.age = 50;
	t.stu.name = "小王";
	t.stu.age = 20;
	t.stu.score = 60;

	cout << "老师姓名：" << t.name << "\n老师编号：" << t.id << "\n老师年龄" << t.age
		<< "\n老师辅导的学生姓名：" << t.stu.name << "\n学生年龄：" << t.stu.age << "\n学生考试分数：" << t.stu.score << endl;

	system("pause");

	return 0;
}
*/