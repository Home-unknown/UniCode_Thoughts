//在多态中，通常父类中函数的实现是毫无意义的，主要都是调用子类重写的内容

//因此可以将这类虚函数改为纯虚函数

//纯虚函数语法：	virtual 返回值类型 函数名 {参数列表} = 0；

//当类中有了纯虚函数，这个类也称为抽象类

//抽象类特点：
//·无法实例化对象	（栈区或堆区都不行）
//·子类必须重写抽象类中的纯虚函数，否则也属于抽象类

/*
#include<iostream>
using namespace std;

class Base
{
public:
	virtual void func() = 0;			//只要有一个纯虚函数，这个类称为抽象类
};

class Son1 :public Base
{
public:
};

class Son2 :public Base
{
public:
	virtual void func()  
	{
		cout << "this is Son2 func" << endl;
	};
};

void test01()
{
	//抽象类无法实例化对象
	//Base b;
	//new Base b;

	//子类必须重写抽象类中的纯虚函数，否则也属于抽象类
	//Son1 s;
	
	Base* base = new Son2;
	base->func();
}

int main()
{
	test01();

	system("pause");

	return 0;
}
*/