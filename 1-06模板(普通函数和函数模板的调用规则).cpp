//调用规则如下：
//1.如果函数模板和普通函数都可以实现，优先调用普通函数
//2.可以通过空模板参数列表来强制调用函数模板
//3.函数模板也能发生函数重载
//4.如果函数模板可以产生更好的匹配，优先调用函数模板

/*
#include<iostream>
using namespace std;

void MyPrint(int a, int b)
{
	cout << "普通函数调用" << endl;
}

template<typename T>
void MyPrint(T a, T b)
{
	cout << "函数模板调用" << endl;
}

template<typename T>
void MyPrint(T a, T b, T c)
{
	cout << "函数模板重载的调用" << endl;
}


void test01()
{
	int a = 10, b = 10;

	MyPrint(a, b);

	MyPrint<>(a, b);

	MyPrint(a, b, 10);

	char c1 = 'a', c2 = 'b';
	MyPrint(c1, c2);				//走函数模板不用隐式类型转换
}

int main()
{
	test01();

	system("pause");

	return 0;
}
*/