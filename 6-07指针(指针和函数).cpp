/*
#include<iostream>
using namespace std;

void swap1(int num1, int num2)		//实现两个数的交换
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

void swap2(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main()
{
//利用指针作为函数参数，可以修改实参的值
	int a = 10;
	int b = 20;

//1.值传递
	//swap1(a, b);

	//cout << "a=" << a << endl;
	//cout << "b=" << b << endl;

//2.地址传递				如果是地址传递，可以修饰实参
	swap2(&a, &b);

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");

	return 0;
}
*/