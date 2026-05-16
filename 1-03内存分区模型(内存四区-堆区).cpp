/*
#include<iostream>
using namespace std;

//堆区：由程序员分配释放，若程序员不释放，程序结束时由操作系统回收
//在C++中主要利用new在堆区开辟内存

int* func() 
{
	//利用new关键字，可以将数据开辟到堆区
	//指针  本质也是局部变量，放在栈上，指针保存的数据是放在堆区的
	int* p = new int(10);
	return p;
};

int main()
{
	//在堆区开辟数据
	int* p = func();

	cout << *p << endl;
	cout << *p << endl;

	system("pause");

	return 0;
}
*/