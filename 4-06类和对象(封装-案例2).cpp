/*
#include<iostream>
using namespace std;

//2.点和圆的关系
//设计一个圆形类（Circle）和一个点类（Point），计算点和圆的关系（圆内、圆上、圆外）
//判断点到圆心的距离（......）

class Point
{
private:
	int m_X = 0;
	int m_Y = 0;

public:
	void setX(int x)		//设置X
	{
		m_X = x;
	}

	int getX()				//获取X
	{
		return m_X;
	}

	void setY(int y)		//设置Y
	{
		m_Y = y;
	}

	int getY()				//获取Y
	{
		return m_Y;
	}
};

class Circle
{
private:
	int m_R = 0;

	Point m_Center;			//在类中可以让另一个类 作为本类的成员

public:
	void setR(int r)		//设置半径
	{
		m_R = r;
	}

	int getR()				//获取半径
	{
		return m_R;
	}

	void setCenter(Point center)		//设置圆心
	{
		m_Center = center;
	}

	Point getCenter()			     	//获取圆心
	{
		return m_Center;
	}
};
       
//判断点到圆心的距离
void isInCircle(Point &p,Circle &c)
{
	int L1 = ((p.getX() - c.getCenter().getX()) * (p.getX() - c.getCenter().getX())) + 
		     ((p.getY() - c.getCenter().getY()) * (p.getY() - c.getCenter().getY()));
	int L2 = c.getR() * c.getR();

	if (L1 == L2)
	{
		cout << "点在圆上" << endl;
	}
	else if (L1 > L2)
	{
		cout << "点在圆内" << endl;
	}
	else if (L1 < L2)
	{
		cout << "点在圆外" << endl;
	}
}

int main()
{
	Point point1;
	point1.setX(0);
	point1.setY(0);

	Point center1;
	center1.setX(3);
	center1.setY(4);

	Circle c1;
	c1.setR(5);
	c1.setCenter(center1);
	
	isInCircle(point1, c1);

	system("pause");

	return 0;
}
*/