/*
#include<iostream>
using namespace std;

//作用：用const来防止误操作

struct student
{
	string name;	//姓名	
	int age;		//年龄
	int score;		//分数
};

void PrintStudent(const struct student* s)			//通过函数来打印结构体变量信息
{
	//s->age = 100;				加入const之后，一但有修改的操作就会报错，可以防止误操作		
	cout << "  子函数中 姓名：" << s->name << "\t年龄：" << s->age << "\t分数" << s->score << endl;
};

int main()
{
	struct student s = { "张三",15,70 };

	PrintStudent(&s);
	
	cout << "main函数中 姓名：" << s.name << "\t年龄：" << s.age << "\t分数" << s.score << endl;

	system("pause");

	return 0;
}
*/