//局限性：模板不是万能的
//数组，自定义数据类型......

//学习模板的意义是为了以后使用STL标准模板库，使用系统提供的模板

/*
#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
	Person(string name,int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

//	bool operator==(Person p1);

	string m_Name;		//姓名
	int m_Age;			//年龄
};

template<typename T>
bool MyCompare(T& a, T& b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//解决方法：
//1. 重载运算符 ==
//bool Person::operator==(Person p1)
//{
//	if (this->m_Age == p1.m_Age && this->m_Name == p1.m_Name)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}

//2.利用具体化Person的版本实现代码，具体化优先调用
template<> bool MyCompare(Person& p1, Person& p2)
{
	if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void test01()
{
	int a = 10, b = 20;

	cout << (MyCompare(a, b) ? "Yes" : "No") << endl;
}

void test02()
{
	Person p1("Tom", 10);
	Person p2("Tom", 11);

	cout << (MyCompare(p1, p2) ? "Yes" : "No") << endl;
}

int main()
{
	test01();

	test02();

	system("pause");

	return 0;
}
*/