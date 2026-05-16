//静态成员就是在成员变量和成员函数前加上关键字“static”，称为 静态成员

//静态成员分为：
//1.静态成员变量：
//	·所有对象共享同一份数据
//	·在编译阶段分配内存
//	·类内声明，类外初始化
//2.静态成员函数：
//	·所有对象共享同一个函数
//	·静态成员函数只能访问静态成员变量

/*
#include<iostream>
using namespace std;

class Person
{
public:
	static int m_A;			//类内声明

//静态成员变量也有访问权限
private:
	static int m_B;
};

int Person::m_A  =100;		//类外初始化

int Person::m_B = 100;

void test01()
{
	Person p1;
	cout << p1.m_A << endl;		//100

	Person p2;
	p2.m_A = 200;				//所有对象共享同一份数据:m_A     200

	cout << p1.m_A << endl;     //200
}

void test02()
{
	//静态成员变量，不属于某个对象，因为所有对象都共享同一份数据
	//因此静态成员变量有两种访问方式:

	//1.通过对象进行访问
	Person p;
	cout << p.m_A << endl;

	//2.通过类名进行访问
	cout << Person::m_A << endl;

//	cout << Person::m_B << endl;       //类外不可访问
}

int main()
{
//	test01();

	test02();

	system("pause");

	return 0;
}
*/