//主要区别：
//1.类模板没有自动类型推导的使用方式
//2.类模板在模板参数列表中可以有默认参数 

/*
#include<iostream>
using namespace std;

template<class NameType, class AgeType = int>
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
		cout << "姓名为：" << this->m_Name << endl;
		cout << "年龄为：" << this->m_Age << endl;
	}

	NameType m_Name;
	AgeType m_Age = 0;
};

void test01()
{
	Person<string, int> p1("Tom", 10);

	p1.showPerson();
}

void test02()
{
	Person<string> p2("Jerry", 11);

	p2.showPerson();
}

int main()
{
	test01();

	test02();



	system("pause");

	return 0;
}
*/