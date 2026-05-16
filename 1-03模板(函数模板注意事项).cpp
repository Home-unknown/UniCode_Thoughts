//注意事项：
//·自动类型推导，必须推导出一致的数据类型T，才可以使用
//·模板必须要确定出T的数据类型，才可以使用

/*
#include<iostream>
using namespace std;

template<class T>			//typename可以替换成class
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test01()
{
	int a = 10, b = 20;

	char c = 'c';
	
//	mySwap(a, c);			//推导不出一致的T类型
	mySwap(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

template<class T>
void func()
{
	cout << "func 函数的调用" << endl;
}

void test02()
{
	func<int>();			//模板必须要确定T的类型，可以给一个无用的类型(int)
}

int main()
{
	test01();
	test02();

	system("pause");

	return 0;
}
*/