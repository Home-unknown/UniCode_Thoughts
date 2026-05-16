/*
#include<iostream>
using namespace std;
//常见样式：  1.无参无返  2.有参无返  3.无参有返  4.有参有返

//1.
void test01()
{
	cout << "this is test01" << endl;
}

//2.
void test02(int a)
{
	cout << "this is test02 a=" << a << endl;
}

//3.
int test03()
{
	cout << "this is test03 ";
	return 1000;
}

//4.
int test04(int a)
{
	cout << "this is test04 a=" << a;
	return 0;
}

int main()
{
	test01();		//1的调用

	int a = 100;
	test02(a);		//2的调用

	int num1 = test03();
	cout << "num1=" << num1 << endl;	//3的调用

	int num2 = test04(10000);
	cout << " num2=" << num2 << endl;	//4的调用

	system("pause");
	 
	return 0;
}
*/