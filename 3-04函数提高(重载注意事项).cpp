/*
#include<iostream>
using namespace std;

//注意事项：
//1.引用作为重载的条件
void func(int& letter1)						//int& a=10;   不合法
{
	cout << "func(int& letter1)的调用" << endl;
}

void func(const int& letter2)				//const int& a=10;
{
	cout << "func(const int& letter2)的调用" << endl;
}

//2.函数重载遇到默认参数
void func2(int a,int b = 10)
{
	cout << "func2(int a,int b)的调用" << endl;
}

void func2(int a)
{
	cout << "func2(int a)的调用" << endl;
}

int main()
{
	int a = 10;
	func(a);
	
	func(10);

	//func2(1);			//当函数重载遇到默认参数，出现二异性，报错，尽量避免这种情况出现

	func2(1, 2);                             

	system("pause");
	
	return 0;
}
*/