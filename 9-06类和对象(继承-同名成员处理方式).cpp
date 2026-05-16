//当子类和父类出现同名的成员，如何通过子类对象，访问子类或父类中同名的数据呢？

//访问子类同名对象	直接访问即可
//访问父类同名对象	需要加作用域

/*
#include<iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		m_A = 100;
	}

	void func()
	{
		cout << "this is Base func" << endl;
	}

	void func(int a)
	{
		cout << "this is Base func(int a)" << endl;
	}

	int m_A = 0;
};

class Son :public Base
{
public:
	Son()
	{
		m_A = 200;
	}

	void func()
	{
		cout << "this is Son func" << endl;
	}

	int m_A;
};

void test01()
{
	Son s;

	cout << "Son m_A = " << s.m_A << endl;

	//如果通过子类对象 访问到父类中同名成员 需要加作用域
	cout << "Base m_A = " << s.Base::m_A << endl;
}

void test02()
{
	Son s;

	s.func();

	s.Base::func();

	//如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有同名成员函数
	//只要是叫 func 的全部覆盖掉  无论是不是函数重载
	s.Base::func(100);
}

int main()
{
//	test01();

	test02();

	system("pause");

	return 0;
}
*/