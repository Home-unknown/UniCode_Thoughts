//C++编译器至少给一个类添加4个函数
//1.默认构造函数(无参，函数体为空)
//2.默认析构函数(无参，函数体为空)
//3.默认拷贝构造函数，对属性进行值拷贝
//4.赋值运算符operator=，对属性进行值拷贝

//如果类中有属性指向堆区，做赋值操作时也会出现深浅拷贝问题

/*
#include<iostream>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		m_Age = new int(age);			//堆区返回变量的地址，用指针接收
	}

	~Person()
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;				//堆区内存重复释放，程序崩溃
		}
	}

	//利用深拷贝，在堆区开辟新的空间存储p2
	//重载赋值运算符
	Person& operator=(Person& p)
	{
		//编译器提供浅拷贝   m_Age = p.m_Age;

		//应该先判断是否有属性在堆区，如果有先释放干净，然后再深拷贝
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}

		//深拷贝
		this->m_Age = new int(*p.m_Age);

		//返回对象自身，实现连等操作
		return *this;
	}

	int* m_Age;
};

void test01()
{
	Person p1(18);

	Person p2(20);

	Person p3(30);

	p3 = p2 = p1;	//赋值操作

	cout << "p1的年龄为：" << *p1.m_Age << endl;

	cout << "p2的年龄为：" << *p2.m_Age << endl;

	cout << "p3的年龄为：" << *p3.m_Age << endl;
}

int main()
{
//内置数据类型允许进行连等操作
	//int a = 10;
	//int b = 20;
	//int c = 30;

	//c = b = a;

	//cout << "a =" << a << endl;
	//cout << "b =" << b << endl;
	//cout << "c =" << c << endl;

	test01();

	system("pause");
	
	return 0;
}
*/