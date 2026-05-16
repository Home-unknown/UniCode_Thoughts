//继承的好处：减少重复代码
//语法： class 子类 ： 继承方式(public protected private)  父类
//子类也称为派生类  父类也称为基类(超类)

//派生类中成员包括两大类：
//一类是从基类继承过来的，一类是自己增加的成员
//从基类继承过来的表现了其共性，而新增成员体现了其个性

/*
#include<iostream>
using namespace std;

//继承实现页面

class BasePage
{
public:
	void header()
	{
		cout << "首页、公开课、登录，注册...(公共头部)" << endl;
	}
	
	void footer()
	{
		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
	}
	
	void left()
	{
		cout << "Java、Python、C++、... (公共分类列表)" << endl;
	}
};

//Java
class Java :public BasePage
{
public:
	void content()
	{
		cout << "this is Java" << endl;
	}
};

//Python
class Python :public BasePage
{
public:
	void content()
	{
		cout << "this is Python" << endl;
	}
};

//Cpp
class Cpp :public BasePage
{
public:
	void content()
	{
		cout << "this is Cpp" << endl;
	}
};

void test01()
{
	cout << "Java下载视频界面如下" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();

	cout << "--------------------------------" << endl;
	cout << "Python下载视频界面如下" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();

	cout << "--------------------------------" << endl;
	cout << "Cpp下载视频界面如下" << endl;
	Cpp cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
}

int main()
{
	test01();

	system("pause");

	return 0;
}
*/