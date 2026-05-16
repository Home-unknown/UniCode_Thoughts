//左移运算符  <<  运算符重载	
//作用：可以输出自定义数据类型

/*
#include<iostream>
using namespace std;

class Person
{
	friend ostream& operator<<(ostream& cout, Person p);				//友元

public:
	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}

private:
	//1.通过成员函数重载 << 号				// p.operator<<( cout )   简化版本：p << cout 
	//注意：通常不会利用成员函数重载<<运算符，因为无法实现cout在左边
	 
	//void operator<<( ostream& cout )		//cout 本质是ostream类的一个成员函数 
	//{
	//	cout << this->m_A << endl;
	//	cout << this->m_A << endl;
	//}

	int m_A = 0;
	int m_B = 0;
};

//2.只能通过全局函数重载 << 运算符
ostream& operator<<(ostream& cout, Person p)					//本质 operator<< ( cout , p )  简化版本：cout << p 
{
	cout << "m_A = " << p.m_A << " m_B = " << p.m_B << endl;

	return cout;
}

void test01()
{
	Person p1(10, 10);
	
//	p1 << cout;						//通过成员函数重载 << 号

	cout << p1 << endl;				//链式编程思想
}

//总结：
//重载左移运算符配合友元可以实现输出自定义数据类型

int main(void)
{
	test01();

	system("pause");

	return 0;
}
*/