//静态成员和非静态成员处理方式一致

//访问子类同名对象	直接访问即可
//访问父类同名对象	需要加作用域

/*
#include<iostream>
using namespace std;

class Base
{
public:
	static int m_A;

	static void func()
	{
		cout << "Base - static void func()" << endl;
	}
};

int Base::m_A = 100;

class Son:public Base
{
public:
	static int m_A;

	static void func()
	{
		cout << "Son - static void func()" << endl;
	}
};

int Son::m_A = 200;

void test01()
{
	//1.通过对象访问
	Son s;
	cout << "Son m_A = " << s.m_A << endl;

	cout << "Base m_A = " << s.Base::m_A << endl;

	//2.通过类名访问
	cout << "通过类名访问 Son m_A = " << Son::m_A << endl;

	cout << "通过类名访问 Base m_A = " << Base::m_A << endl;

	//第一个::代表通过类名方式访问	第二个::代表访问父类作用域下
	cout << "通过类名访问 Base m_A = " << Son::Base::m_A << endl;
}

//同名静态成员函数
void test02()
{
	//1.通过对象访问
	Son s;
	s.func();
	s.Base::func();

	//2.通过类名访问
	Son::func();
	Son::Base::func();
}

int main()
{
//	test01();

	test02();

	system("pause");

	return 0;
}
*/