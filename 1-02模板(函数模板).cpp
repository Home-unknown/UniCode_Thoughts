//函数模板作用：
//建立一个通用函数，其函数返回值类型和形参类型可以不具体制定，用一个虚拟的类型来代表

//语法：	
//template < typename T >
//函数的声明和定义

//解释：
//template 声明创建模板
//typename 表明其后面的符号是一种数据类型，可以用class代替
//	  T	   通用的数据类型，名称可以替换，通常为大写字母(type)

//模板的目的：将函数类型参数化

/*
#include<iostream>
using namespace std;

template<typename T>	//声明一个模板，告诉编译器后面的代码中紧跟着的T不要报错，T是一个通用数据类型
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test01()
{
	int a = 10, b = 20;
	//两种方式使用函数模板
	//1.自动类型推导
//	mySwap(a, b);
	
	//2.显示指定类型
	mySwap<int>(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

int main()
{
	test01();
	
	system("pause");

	return 0;
}
*/