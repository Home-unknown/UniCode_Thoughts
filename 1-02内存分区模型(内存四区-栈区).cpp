/*
#include<iostream>
using namespace std;
 
//栈区：由编译器自动分配释放，存放函数的参数值，局部变量等

//注意事项：不要返回局部变量的地址，栈区开辟的数据由编译器自动释放

int* function(int b)	//形参数据也会放在栈区
{
	b = 100;
	int a = 10;			//局部变量：存放在栈区，栈区的数据在函数执行完后自动释放
	return &a;			//返回局部变量的地址
}

int main()
{
	//接受function函数的返回值
	int* p = function(1);

	cout << *p << endl;		//第一次可以正确打印数字，是因为编译器做了保留

	//x86下是乱码，x64下对返回值进行了优化

	cout << *p << endl;		//第二次这个数据就不在保留了

	system("pause");

	return 0;
}
*/