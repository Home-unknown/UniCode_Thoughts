//类模板实例化出的对象，向函数传参有三种传入方式：
//1.指定传入的类型	直接显示对象的数据类型
//2.参数模板化		将对象中的参数变为模板进行传递
//3.整个类模板化	将这个对象类型 模板化进行传递

/*
#include<iostream>
#include<string>
using namespace std;

template<class T1,class T2>		
class Person
{
public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void ShowPerson()
	{
		cout << "名字是：" << this->m_Name << endl;
		cout << "年龄是：" << this->m_Age << endl;
	}

	T1 m_Name;
	T2 m_Age;
};

void PrintPerson1(Person<string, int>& p)	//1.指定传入的类型	直接显示对象的数据类型
{
	p.ShowPerson();
}

template<class T1, class T2>				//2.参数模板化	将对象中的参数变为模板进行传递
void PrintPerson2(Person<T1, T2>& p)
{
	p.ShowPerson();
	cout << "T1的类型为：" << typeid(T1).name() << endl;
	cout << "T2的类型为：" << typeid(T2).name() << endl;
}

template<class T>							//3.整个类模板化	将这个对象类型 模板化进行传递
void PrintPerson3(T& p)
{
	p.ShowPerson();
	cout << "T3的类型为：" << typeid(T).name() << endl;
}

void test01()
{
	Person<string, int>	p1("Tom", 100);
	PrintPerson1(p1);
}

void test02()
{
	Person<string, int> p2("Jerry", 99);
	PrintPerson2(p2);
}

void test03()
{
	Person<string, int> p3("And", 190);
	PrintPerson3(p3);
}

int main()
{
	test01();

	test02();

	test03();

	system("pause");

	return 0;
}
*/