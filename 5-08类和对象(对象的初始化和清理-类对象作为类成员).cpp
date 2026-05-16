//C++类中的成员可以是另一个类的对象，称该成员为“对象成员”

/*
#include<iostream>
using namespace std;

#include<string>

class Phone
{
public:

	Phone(string pName)
	{
		m_Pname = pName;
		cout << "Phone的构造函数调用" << endl;
	}

	~Phone()
	{
		cout << "Phone析构函数调用" << endl;
	}

	string m_Pname;
};

class Person
{
public:

	// Phone m_Phone = pName  隐式转换法
	Person(string name, string pName) :m_Name(name), m_Phone(pName)		
	{
		cout << "Person的构造函数调用" << endl;
	}

	~Person()
	{
		cout << "Person析构函数调用" << endl;
	}
	
	//姓名
	string m_Name;

	//手机
	Phone m_Phone;
};

//当其他类对象作为本类成员，构造时候先构造类对象，再构造自身
//析构的顺序与构造相反
void test01()
{
	Person p("张三", "iphone17 pro max");

	cout << p.m_Name << "拿着：" << p.m_Phone.m_Pname << endl;
	
}

int main()
{
	test01();



	system("pause");

	return 0;
}
*/