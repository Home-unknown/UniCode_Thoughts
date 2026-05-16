/*
#include<iostream>
#include<string>
using namespace std;

template<class T1,class T2>
class Person
{
public:
	Person(T1 name, T2 age);
	
	void ShowPerson();

	T1 m_Name;
	T2 m_Age;
};

template<class T1, class T2>				//构造函数的类外实现
Person<T1, T2>::Person(T1 name, T2 age)		
{
	this->m_Name = name;
	this->m_Age = age;
}

template<class T1, class T2>				//成员函数的类外实现
void Person<T1, T2>::ShowPerson()
{
	cout << "姓名：" << this->m_Name << endl;
	cout << "年龄：" << this->m_Age << endl;
}

void test01()
{
	Person<string, int> p("Tom", 20);
	p.ShowPerson();
}

int main()
{
	test01();

	system("pause");

	return 0;
}
*/