/*
#include<iostream>
using namespace std;

//注意事项：
//1.引用必须初始化
//2.引用初始化后不能改变

//总结：1.对引用只有声明，没有定义	
//		2.引用必须初始化
//		3.引用初始化后不能改变
//		4.没有引用数组
//		5.没有引用的引用
//		6.没有引用的指针

int main()
{
	int a = 10;
	int& b = a;

	//1.引用必须初始化
	//int& b;

	//2.引用初始化后不能改变
	int c = 20;

	b = c;			//赋值操作，而不是更改引用

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;

	system("pause");

	return 0;
}
*/