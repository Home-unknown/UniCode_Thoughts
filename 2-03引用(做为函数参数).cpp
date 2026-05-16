/*
#include<iostream>
using namespace std;

//作用：函数传参时，可以利用引用的技术让形参修饰实参
//优点：可以简化指针修改实参

//交换函数

//1.值传递
void swap01(int num1,int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

//2.地址传递
void swap02(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

//3.引用
void swap03(int& num1, int& num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

int main()
{
	int a = 10;
	int b = 20;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	cout << endl;				

	//swap01(a, b);					//形参不会修饰实参

	cout << "swap01 a=" << a << endl;
	cout << "swap01 b=" << b << endl;

	cout << endl;

	//swap02(&a, &b);				//形参可以修饰实参

	cout << "swap02 a=" << a << endl;
	cout << "swap02 b=" << b << endl;

	cout << endl;

	swap03(a, b);					//引用传递，形参可以修饰实参

	cout << "swap03 a=" << a << endl;
	cout << "swap03 b=" << b << endl;

	system("pause");

	return 0;
}
*/