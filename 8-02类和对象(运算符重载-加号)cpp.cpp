//加号运算符重载  作用：实现两个自定义数据类型相加的运算

/*
#include<iostream>
using namespace std;

class Person
{
public:
	//1.通过成员函数重载 + 号
	//Person operator+(Person& p)						//形参用引用或者指针，避免浪费空间和时间
	//{
	//	Person temp;
	//	temp.m_A = this->m_A + p.m_A;
	//	temp.m_B = this->m_B + p.m_B;
	//	return temp;
	//}

	int m_A;
	int m_B;
};

//2.通过全局函数重载 + 号
Person operator+(Person& person1, Person& person2)		//形参用引用或者指针，避免浪费空间和时间
{
	Person temp;
	temp.m_A = person1.m_A + person2.m_A;
	temp.m_B = person1.m_B + person2.m_B;
	return temp;
}

Person operator+(Person& person1, int num)				//函数重载版本
{
	Person temp;
	temp.m_A = person1.m_A + num;
	temp.m_B = person1.m_B + num;
	return temp;
}

void test01()
{
	Person p1;
	p1.m_A = 10;
	p1.m_B = 20;

	Person p2;
	p2.m_A = 10;
	p2.m_B = 20;

	//成员函数重载本质调用
	//Person p3 = p1.operator+(p2);

	//全局函数重载本质调用
	//Person p3 = operator+(p1,p2);

	Person p3 = p1 + p2;

	cout << "p3 m_A = " << p3.m_A << endl;
	cout << "p3 m_B = " << p3.m_B << endl;

	//运算符重载也能实现函数重载
	Person p4 = p1 + 100;							// Person + int
	cout << "p4 m_A = " << p4.m_A << endl;
	cout << "p4 m_B = " << p4.m_B << endl;
}

//总结：
//1.对于内置的数据类型的表达式的运算符是不可能改变的
//2.不要滥用运算符重载

int main()
{
	test01();

	system("pause");

	return 0;
}
*/