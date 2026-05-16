/*
#include<iostream>
using namespace std;

#include<string>

class Building;						//前置声明

class GoodGay
{
public:
	GoodGay();						//构造函数要在类内声明

	void visit();					//参观函数 访问Building中的属性

	Building* building;
};

class Building
{
	friend class GoodGay;			//GoodGay是本类的好朋友，可以访问本类中私有成员

public:
	Building();						//构造函数要在类内声明

	string m_SittingRoom;

private:
	string m_Bedroom;
};

Building::Building()				//类外写成员函数
{
	m_SittingRoom = "客厅";
	m_Bedroom = "卧室";
}

GoodGay::GoodGay()
{
	//创建一个建筑物对象
	building = new Building;		//new什么样的数据类型，就返回这个数据类型的指针
}

void GoodGay::visit()
{
	cout << "好基友正在访问：" << building->m_SittingRoom << endl;

	cout << "好基友正在访问：" << building->m_Bedroom << endl;
}

void test01()
{
	GoodGay gg;
	gg.visit();
}

int main()
{
	test01();
	
	system("pause");

	return 0;
}
*/