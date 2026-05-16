//菱形继承（钻石继承）概念：
//两个派生类属于一个基类
//又有某个类同时继承两个派生类

//			羊(动物)
// 动物：		   草泥马(羊驼)
//			驼(动物)

//菱形继承问题：
//1.羊继承了动物的数据，驼同样继承了动物的数据，当草泥马使用数据时，就会产生二义性。
//2.草泥马继承自动物的数据继承了两份，其实我们应该清楚，这份数据我们只需要一份就可以。

/*
#include<iostream>
using namespace std;

class Animal								//动物
{
public:
	int m_Age = 0;
};

//利用虚继承，解决菱形继承问题
//继承前加上关键字 virtual 变为虚继承
//Animal类称为：虚基类
class Sheep: virtual public Animal					//羊
{
public:

};

class Camel : virtual public Animal					//驼
{
public:

};

class CaoNiMa : public Sheep, public Camel	//羊驼
{
public:

};

void test01()
{
	CaoNiMa cao;

	cao.Sheep::m_Age = 18;
	cao.Camel::m_Age = 28;

	cout << "Sheep = " << cao.Sheep::m_Age << endl;
	cout << "Camel = " << cao.Camel::m_Age << endl;
	cout << "m_Age = " << cao.m_Age << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}
*/