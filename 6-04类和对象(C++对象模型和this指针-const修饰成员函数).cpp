//常函数：
//·成员函数后加const后我们称这个函数为常函数
//·常函数内不可以修改成员属性
//·成员属性声明时加关键字mutable后，在常函数中依然可以修改

//常对象
//·声明对象前加const称该对象为常对象
//·常对象只能调用常函数

/*
#include<iostream>
using namespace std;

class Person
{
public:

	//this指针的本质是 指针常量 指针的指向不可以改变
	//Person* const this;
	//在成员函数后面加const，修饰的是this指向，让指针指向的值也不可以修改
	void showPerson() const 
	{
		//this->m_A = 100;			
		//this = NULL;				//this指针不可以修改指针的指向
	}

	void func()
	{
	}

	int m_A;
	mutable int m_B;			//特殊变量，即使在常函数中，也可以修改这个值，加关键字mutable
};

//常函数
void test01()
{
	Person p1;

	p1.showPerson();
}

//常对象
void test02()
{
	const Person p2;			//在对象前加const，变为常对象
//	p.m_A = 100;
	p2.m_B = 100;

//常对象只能调用常函数
	p2.showPerson();
//	p2.func();					//常对象如果允许调用非常函数，则可能修改属性
}

int main()
{	
	test01();

	test02();

	system("pause");

	return 0;
}
*/