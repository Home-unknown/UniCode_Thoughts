/*
#include<iostream>
#include<string>
using namespace std;

	//概念：属于用户自定义的数据类型，允许用户储存不同的数据类型
	//语法：   struct 结构体名 { 结构体成员列表 }；
	//struct 结构体名 变量名
	//struct 结构体名 变量名 = { 成员1值,成员2值 };
	//定义结构体时顺便创建变量

struct student1
{
	string name;		//姓名
	int age;			//年龄
	int score;			//分数
};

int main()
{
	struct student1 s1;

	s1.name = "张三";			//通过"."来访问结构体变量中的属性
	s1.age = 18;
	s1.score = 100;

	cout << "姓名：" << s1.name << " 年龄：" << s1.age << " 分数：" << s1.score << endl;
	
	system("pause");

	return 0;
}
*/