//语法： class 子类  ： 继承方式  父类

//继承方式一共三种：
//1.公共继承
//2.保护继承
//3.私有继承

/*	A(父类)		B(子类)
									class A                 	
									{									
									public:								
											int a;								
									protected:							
											int b;								
									private:							
											int c;						
									}	

	公有继承：						保护继承：							私有继承：
	class B: public A				class B: protected A				class B: private A
	{								{									{
	public:							protected:							private:
			int a;							int a;								int a;
	protected:								int b;								int b;
			int b;					不可访问：							不可访问：
	不可访问：								int c;								int c;
			int c;					}									}
	}
*/

/*
#include<iostream>
using namespace std;	

class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son1 :public Base1
{
public:
	void func()
	{
		m_A = 10;			//父类中公共权限成员 到子类中依然是公共权限
		m_B = 10;			//父类中保护权限成员 到子类中依然是保护权限
//		m_C = 10;			//父类中私有权限成员 子类访问不到
	}
};

void test01()
{
	Son1 s1;
	s1.m_A = 100;
//	s1.m_B = 100;			//到Son1中m_B是保护权限 类外访问不到
}

class Son2 :protected Base1
{
public:
	void func()
	{
		m_A = 100;			//父类中公共权限成员 到子类中变为保护权限
		m_B = 100;			//父类中保护权限成员 到子类中依然是保护权限
//		m_C = 100;			//父类中私有权限成员 子类访问不到
	}
};

void test02()
{
	Son2 s1;
	//s1.m_A = 1000;			//在Son2中 m_A变成了保护权限，类外访问不到
	//s1.m_B = 1000;			//到Son2中 m_B是保护权限，类外访问不到
}

class Son3 :private Base1
{
public:
	void func()
	{
		m_A = 100;			//父类中公共权限成员 到子类中变为私有权限
		m_B = 100;			//父类中公共权限成员 到子类中变为私有权限
		//m_C = 100;		//父类中私有权限成员 子类访问不到
	}
};

void test03()
{
	Son3 s1;
	//s1.m_A = 1000;			//在Son2中 m_A变成了私有权限，类外访问不到
	//s1.m_B = 1000;			//到Son2中 m_B变成了私有权限，类外访问不到
}

class GrandSon1 :public Son3
{
public:
	void func()
	{
//		m_A = 100;			//到了Son3中m_A变为私有，即使是儿子也无法访问
//		m_B = 100;			//到了Son3中m_B变为私有，即使是儿子也无法访问
//		m_C = 100;			//到了Son3中m_C变为私有，即使是儿子也无法访问
	}
};
int main()
{
	test01();

	test02();

	test03();

	system("pause");

	return 0;
}
*/