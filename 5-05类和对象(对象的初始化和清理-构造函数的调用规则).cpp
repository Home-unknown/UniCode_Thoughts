//默认情况下，C++编译器至少给一个类添加3个函数
//1.默认构造函数（无参，函数体为空）（空实现）
//2.默认析构函数（无参，函数体为空）（空实现）
//3。默认拷贝构造函数，对属性进行“值拷贝”、

//构造函数调用规则如下：
//1.如果用户定义有参构造函数，C++不再提供默认无参构造，但是会提供默认拷贝构造。
//2.如果用户定义拷贝构造函数，C++不再提供其他构造函数。

/*
#include<iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "Person默认构造函数的调用" << endl;
	}

	Person(int age)
	{
		cout << "Person有参构造函数的调用" << endl;
		m_Age = age;
	}

	Person(const Person& p)
	{
		m_Age = p.m_Age;
		cout << "Person拷贝构造函数的调用" << endl;
	}

	~Person()
	{
		cout << "Person默认析构函数的调用" << endl;
	}

	int m_Age = 0;
};

//void test01()
//{
//	Person p;
//	p.m_Age = 18;
//
//	Person p2(p);
//
//	cout << "p2的年龄为：" << p2.m_Age << endl;
//}

void test02()
{
	Person p(28);
	Person p2(p);
	cout << "p2的年龄为：" << p2.m_Age << endl;
}

int main()
{
//	test01();

	test02();


	system("pause");

	return 0;
}
*/