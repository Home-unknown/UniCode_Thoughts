/*
#include<iostream>
using namespace std;

#include<string>

class Building
{
	//goodGay全局函数是 Building好朋友，可以访问building中私有成员 
	friend void goodGay(Building* building);

public:
	Building()
	{
		m_SittingRoom = "客厅";
		m_Bedroom = "卧室";
	}

	string m_SittingRoom;

private:
	string m_Bedroom;
};

//箭头运算符 -> 用于结构体/类指针变量访问成员。A->B则A为指针，->是成员提取，A->B是提取A中的成员B，A只能是指向类、结构、联合的指针

void goodGay(Building* building)			//全局函数
{
	cout << "好基友全局函数 正在访问：" << building->m_SittingRoom << endl;

	cout << "好基友全局函数 正在访问：" << building->m_Bedroom << endl;
}

void test01()
{
	Building d;

	goodGay(&d);
}

int main()
{
	test01();

	system("pause");

	return 0;
}
*/