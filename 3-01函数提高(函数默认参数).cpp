/*
#include<iostream>
using namespace std;

//在C++中，函数的形参列表中的形参是可以有默认值的
//语法： 返回值类型  函数名  (参数 = 默认值)  {}

//函数的默认参数

//如果我们自己传入数据，就用自己的数据，如果没有，那么就用默认值
int func01(int a, int b = 20, int c = 30)			
{
	return a + b + c;
}

//注意事项
//1.如果某个位置已经有了默认参数，那么从这个位置往后，从左往右都必须有默认值

//int func02(int a, int b = 20  , int c ,int d = 20)
//{
//	return a + b + c + d;
//}

//2.如果函数声明有默认参数，函数实现就不能有默认参数
//声明和实现只能有一个默认参数

//int func03(int a = 10 ,int b = 10);

//int func03(int a = 10 ,int b = 10)
//{
//	return a + b;
//}

int main()
{
	cout << func01(10, 30) << endl;

	//cout << func03 << endl;


	system("pause");

	return 0;
}
*/