//类模板的作用：	建立一个类，类中成员 数据类型可以不制定，用一个虚拟的类型来代表

//语法：	template<class T>  类

/*
#include<iostream>
#include<string>
using namespace std;

template<class NameType, class AgeType>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	
	void showPerson()
	{	
		cout <<"姓名为："<<this->m_Name << endl;
		cout <<"年龄为："<< this->m_Age << endl;
	}

	NameType m_Name;
	AgeType m_Age = 0;
};

void test01()
{
	Person<string, int> p1("Tom", 10);

	p1.showPerson();
}

int main()
{
	test01();

	system("pause");

	return 0;
}
*/