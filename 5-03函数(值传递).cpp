/*
#include<iostream>
using namespace std;

//所谓值传递就是函数调用时实参将数值传入给形参
//值传递时，如果形参发生改变，并不会影响实参

//定义函数，实现两个数字进行交换
void swap(int num1, int num2)
{
	cout << "num1:" << num1 << endl;
	cout << "num2:" << num2 << endl;
	
	int temp = num1;
	num1 = num2;
	num2 = temp;
	
	cout << "\nnum1:" << num1 << endl;
	cout << "num2:" << num2 << endl;

	//return	返回值不需要时不用写return
}

int main()
{
	int a = 10;
	int b = 20;

	cout << "\na:" << a << endl;
	cout << "b:" << b << endl;

	swap(a, b);

	cout << "a:" << a << endl;
	cout << "b:" << b << endl;

	system("pause");

	return 0;						//总结：值传递时，形参是修饰不了实参的
}
*/