/*
#include<iostream>
using namespace std;

//作用：将结构体作为参数向函数中传递
//传递方式：  1.值传递		2.地址传递

struct student
{
	string name;	//姓名	
	int age;		//年龄
	int score;		//分数
};

void PrintStudent1(struct student s)		//打印学生信息(值传递)
{
	s.age = 100;							//不改变实参！！！！
	cout << "子函数1中  姓名：" << s.name << "\t年龄：" << s.age << "\t分数" << s.score << endl;
};

void PrintStudent2(struct student* p)		//打印学生信息(地址传递)
{
	p->age = 200;							//改变实参！！！！
	cout << "子函数2中  姓名：" << p->name << "\t年龄：" << p->age << "\t分数" << p->score << endl;
};

int main()
{
	struct student s;
	s.name = "张三";
	s.age = 20;
	s.score = 85;

	PrintStudent1(s);
	PrintStudent2(&s);

	cout << "main函数中 姓名：" << s.name << "\t年龄：" << s.age << "\t分数" << s.score << endl;

	system("pause");

	return 0;
}
*/