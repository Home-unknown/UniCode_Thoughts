//全局函数类内实现 - 直接在类内声明即可
//全局函数类外实现 - 需要提前让编译器知道全局函数的存在

//[注]：如果没有特殊要求，使用类内实现，方便简单，且编译器可以直接识别

/*
#include<iostream>
#include<string>
using namespace std;

//需要编译器提前知道Person类模板存在
template<class T1, class T2>
class Person;

//需要编译器提前知道全局函数
template<class T1, class T2>
void PrintPerson02(Person<T1, T2> p)
{
	cout << "姓名：" << p.m_Name << endl;
	cout << "年龄：" << p.m_Age << endl;
}

template<class T1, class T2>
class Person
{
	//全局函数类内实现
	friend void PrintPerson01(Person<T1, T2> p)
	{
		cout << "姓名：" << p.m_Name << endl;
		cout << "年龄：" << p.m_Age << endl;
	}

	//全局函数类外实现						
	//friend void PrintPerson02(Person<T1, T2> p);		//普通函数

	//如果成员函数类外实现，需要编译器提前知道
	friend void PrintPerson02<>(Person<T1, T2> p);		//加空模板的参数列表

public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};

void test01()
{
	//全局函数类内实现
	Person<string, int> p1("Tom", 18);
	PrintPerson01(p1);

	//全局函数类外实现
	Person<string, int> p2("Jerry", 17);
	PrintPerson02(p2);
}

int main()
{
	test01();

	system("pause");

	return 0;
}
*/