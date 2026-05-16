/*
#include<iostream>
using namespace std;

//作用：告诉编译器函数名称及如何调用函数。函数的主体可以单独定义

//比较函数，实现两个整型数字进行比较，返回较大的值
int maximum(int a, int b);		//提前告诉编译器函数的存在，可以利用函数的声明
int maximum(int a, int b);
int maximum(int a, int b);
int maximum(int a, int b);		//函数的声明可以多次(没必要)，但是函数的定义只能有一次


int main()
{
	int a = 10;
	int b = 20;

	cout << maximum(a,b) << endl;

	system("pause");

	return 0;
}

int maximum(int a, int b)		//定义在main函数之后
{
	return a > b ? a : b;
}
*/