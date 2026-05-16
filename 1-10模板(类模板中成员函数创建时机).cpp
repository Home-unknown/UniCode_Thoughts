//类模板中成员函数和普通类中成员函数创建时机是有区别的：
//1.普通类中的成员函数一开始就可以创建
//2.类模板中的成员函数在调用时才创建

/*
#include<iostream>
using namespace std;

class Person1
{
public:
	void ShowPerson1()
	{
		cout << "Person1 show" << endl;
	}
};

class Person2
{
public:
	void ShowPerson2()
	{
		cout << "Person2 show" << endl;
	}
};

template<class T>
class MyClass
{
public:
	T obj;

	void func1()
	{
		obj.ShowPerson1();
	}
	
	void func2()
	{
		obj.ShowPerson2();
	}
};

void test01()
{
	MyClass<Person1> m;
	m.func1();					
//	m.func2();		//m 是 Person1 数据类型，无法调用func2
}

int main()
{
	test01();

	system("pause");

	return 0;
}
*/