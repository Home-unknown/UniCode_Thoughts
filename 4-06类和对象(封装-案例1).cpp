/*
#include<iostream>
using namespace std;

//1.设计立方体类（Cube） 长(L)	宽(W)	高(H)
//求出立方体的面积和体积
//分别用全局函数和成员函数判断两个立方体是否相等

class Cube
{
public:
	void setL(int l)		//设置长
	{
		m_L = l;
	}

	int getL()				//获取长
	{
		return m_L;
	}

	void setW(int w)		//设置宽
	{
		m_W = w;
	}

	int getW()				//获取宽
	{
		return m_W;
	}

	void setH(int h)		//设置高
	{
		m_H = h;
	}

	int getH()				//获取高
	{
		return m_H;
	}

//计算	
	int calculateS()		//计算立方体面积
	{
		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
	}

	int calculateV()		//计算立方体体积
	{
		return m_L * m_W * m_H;
	}

private:												//不为类分配空间，所以成员顺序可以随意排列，数据成员可以放在方法成员后面
	int m_L = 0;		//长
	int m_W = 0;		//宽
	int m_H = 0;		//高

//利用成员函数判断两个立方体是否相等
	bool isSameByClass(Cube &c)
	{
		if ( m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

//利用全局函数判断两个立方体是否相等
	bool isSame(Cube &c1,Cube &c2)					//头一个立方体已经调用了这个函数，所以传入一个参数
	{
		if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
		{
			return true;
		}
		else
		{
			return false;
		}
}

int main()
{
	Cube c1;
	c1.setL(10);
	c1.setW(20);
	c1.setH(15);

	cout << "c1的面积为：" << c1.calculateS() << endl;
	cout << "c1的体积为：" << c1.calculateV() << endl;

	Cube c2;
	c2.setL(10);
	c2.setW(20);
	c2.setH(15);

	bool ret = isSame(c1,c2);
	if (ret)
	{
		cout << "相等" << endl;
	}
	else
	{
		cout << "不相等" << endl;
	}

	ret = c1.isSameByClass(c2);
	if (ret)
	{
		cout << "member相等" << endl;
	}
	else
	{
		cout << "member不相等" << endl;
	}

	system("pause");

	return 0;
}
*/