/*
#include<iostream>
using namespace std;

//作用：函数名可以相同，提高复用性

//函数重载满足条件：
//1.同一个作用域下(main函数里外......)
//2.函数名称相同
//3.函数参数类型不同 或者 个数不同 或者 顺序不同

void func()
{
	cout << "func的调用" << endl;
}

void func(int a)							//参数类型不同 
{
	cout << "func (int a) 的调用" << endl;
}

void func(double a)							//参数类型不同
{
	cout << "func (double a) 的调用" << endl;
}

void func(int a,double b)					//个数不同
{
	cout << "func (int a,double b) 的调用" << endl;
}

void func(double a,int b)					//顺序不同
{
	cout << "func (double b,int a) 的调用" << endl;
}

//注意：函数的返回值不可以作为函数重载的条件
//int func(double a, int b)					
//{
//	cout << "func (double b,int a) 的调用" << endl;
//}

int main()
{
	func();

	func(10);

	func(3.14);

	func(10, 3.14);

	func(3.14, 10);

	system("pause");
		
	return 0;
}
*/