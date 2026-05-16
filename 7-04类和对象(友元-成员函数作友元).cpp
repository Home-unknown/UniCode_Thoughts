//友元成员函数的实现必须写到building类定义之后,
//因为，在类定义之前，编译器还没有关于这个类的任何信息，所以它无法知道这个类有哪些私有和保护成员可以被访问。

/*
#include<iostream>
#include<string>
using namespace std;

class Building;				//前置声明(防止未遇到Building类之前就报错)

class GoodGay
{
public:
	GoodGay();				//类内声明构造函数			现在不要写构造函数里面内容！！！

//1.因为Goodgay中的构造函数需要调用Building的构造函数，所以Goodgay类中构造函数的实现必须在Building类的定义之后；
//2. Goodgay类定义“类内”时不实现 构造函数 和 需要friend的成员函数；
//3. Goodgay在Building类定义后，“类外”实现构造函数 和 需要friend的成员函数；

	void visit01();			//让visit01函数  可以  访问Building中私有成员

	void visit02();			//让visit02函数 不可以 访问Building中私有成员

	Building* building;
};

class Building
{
	friend void GoodGay::visit01();

public:
	Building();

	string m_SittingRoom;
	
private:
	string m_Bedroom;	
};

GoodGay::GoodGay()			//类外写GoodGay构造函数
{
	building = new Building;
}

Building::Building()		//类外写Building构造函数
{
	m_SittingRoom = "客厅";
	m_Bedroom = "卧室";
}

void GoodGay::visit01()		//GoodGAy成员函数
{
	cout << "vistt01函数正在访问：" << building->m_SittingRoom << endl;
	cout << "vistt01函数正在访问：" << building->m_Bedroom << endl;
}

void GoodGay::visit02()		//GoodGAy成员函数
{
	cout << "visit02函数正在访问：" << building->m_SittingRoom << endl;
//	cout << "visit02函数正在访问：" << building->m_Bedroom << endl;
}

void test01()
{
	GoodGay gg;
	gg.visit01();
}

void test02()
{
	GoodGay gg;
	gg.visit02();
}

int main()
{
	test01();

	test02();

	system("pause");

	return 0;
}
*/