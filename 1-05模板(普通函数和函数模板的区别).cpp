//区别：
//1.普通函数调用时可以发生自动类型转换（隐式类型转换）
//2.函数模板在调用时，如果利用自动类型推导，不会发生隐式类型转换
//3.如果利用显示指定类型的方式，可以发生隐式类型转换

/*
#include<iostream>
using namespace std;

int MyAdd01(int a, int b)
{
	return a + b;
}

template<typename T>
T MyAdd02(T a, T b)
{
	return a + b;
}

void test01()
{
	int a = 10, b = 20;
	char c = 'c';
	cout << MyAdd01(a, c) << endl;

	//自动类型推导	不会发生隐式类型转换
//	cout << MyAdd02(a, c) << endl;			//(int, char)

	//显示指定类型  可以发生隐式类型转换
	cout << MyAdd02<int>(a, c) << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}
*/