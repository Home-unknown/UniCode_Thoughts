/*
#include<iostream>
#include<string>
using namespace std;

//通过指针访问结构体中的成员
//利用操作符	->	   可以通过结构体指针访问结构体属性

struct student
{
	string name;		//姓名
	int age;			//年龄
	int score;			//分数
};

int main()
{
	struct student s = { "张三", 18 , 100 };

	struct student* p = &s;				//通过指针指向结构体变量

	cout << "姓名：" << p->name  <<" "
		 << "年龄：" << p->age   <<" "
		 << "分数：" << p->score << endl;

	system("pause");

	return 0;
}
*/