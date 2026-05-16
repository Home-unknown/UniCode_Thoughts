/*
#include<iostream>
using namespace std;

//封装是C++面向对象三大特性之一

//封装的意义:
//1.将属性和行为作为一个整体，表现生活中的事物
//2.将属性和行为加以权限控制

//封装意义一：		在设计类的时候，属性和行为写在一起，表现事物

//语法：	class 类名 { 访问权限: 属性 / 行为 }；

//1.设计一个圆类，求圆的周长
//圆求周长的公式： C  = 2 * pi * R

//const double pi = 3.14;			//圆周率（全局常量）
//
//class Circle 
//{	
//	//访问权限
//public:				//公共权限  紧跟“：”
//	
//	//属性
//	int m_r;		//半径
//
//	//行为	(通常使用函数)
//	double CalculateZC()
//	{ 
//		return 2 * pi * m_r;
//	}
//};

//2.设计一个学生类，属性有姓名和学号，可以给姓名、学号赋值，可以显示学生的姓名、学号

#include<string>

class Student
{
public:					

	//类中的属性和行为，统称为“成员”
	//属性 即：成员属性(成员变量)
	//行为 即：成员函数(成员方法)
	
	string m_name;

	int m_id = 0;

	void showStudent()
	{
		cout << "姓名：" << m_name << "\t" << "学号：" << m_id << endl;
	}

	void setStudent(string name,int id = 0)
	{
		m_name = name;
		m_id = id;
	}
};

int main()
{
	////实例化：通过一个类，创建一个对象的过程
	//
	////通过圆类，创建具体的圆（对象）
	//Circle c1;
	//c1.m_r = 10;

	////C  = 2 * pi * R
	//cout << "圆的周长为：" << c1.CalculateZC() << endl; 

	Student p1;
	 
	p1.setStudent("张三",123456789);

	p1.showStudent();

	system("pause");

	return 0;
}
*/