//类模板遇到继承时，需要注意：
//1.当子类继承的父类时一个类模板时，子类在声明的时候，要指定出父类中T的类型
//2.如果不指定，编译器无法给子类分配内存
//3.如果想要灵活指定出父类中T的类型，子类也要变成类模板

/*
#include<iostream>
using namespace std;

template<class T>
class Base
{
public:
	T m;
};

//class Son : public Base		//必须知道父类中T的类型，才能继承给子类
class Son : public Base<int>
{
public:

};

template<class T1, class T2>
class Son2 : public Base<T2>
{
public:
	Son2()
	{
		cout << "T1的类型为：" << typeid(T1).name() << endl;
		cout << "T2的类型为：" << typeid(T2).name() << endl;
	}
	T1 obj;
};

void test01()
{
	Son s1;
}

void test02()
{
	Son2<int, char> s2;
}

int main()
{
//	test01();

	test02();

	system("pause");

	return 0;
}
*/