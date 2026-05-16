/*
#include<iostream>
using namespace std;
//作用：常量引用主要用来修饰形参，防止误操作
//在函数形参列表中，可以加const修饰形参，防止形参改变实参

void showValue(const int& val)
{
//	val = 1000;             //用const修饰后，可以防止形参改变实参
	cout << "val=" << val << endl;
}

int main()
{
	int a = 10;

//	int& ref = 10;			//引用必须引一块合法的内存空间

	const int& ref = 10;	//加上const之后，编译器将代码修改  int temp = 10; const int& ref = 10;

//	ref = 20;				//加入const之后变为只读，不可以修改

	showValue(a);

	cout << "a=" << a << endl;



	system("pause");

	return 0;
}
*/