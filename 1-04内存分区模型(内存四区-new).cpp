/*
#include<iostream>
using namespace std;

//在C++中主要利用new在堆区开辟内存
//堆区开辟的数据，由操作员手动开辟，手动释放，释放利用操作符delete
//语法：	new 数据类型
//利用new创建的数据，会返回该数据对应的类型的指针

//1.new的基本语法
int* func()
{
	//在堆区创建整型数据
	//new 返回该数据对应的类型的指针
	int* p = new int(10);
	return p;
};

void test01()
{
	int* P = func();
	cout << *P << endl;
	//堆区的数据 由程序员管理开辟、管理释放

	//如果想释放堆区的数据，利用关键字delete
	delete P;

	//cout << *P << endl;		//内存已经被释放，再次访问就是非法操作，会报错
}

//2.在堆区利用new开辟数组
void test02()
{
	//创建10整型数组，在堆区
	int* arr = new int[10];		//10代表数组里面有10个元素

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;		//给10个元素赋值	100~109
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	//释放数组的时候，要加[]
	delete[]arr;
}

int main()
{
	test01();

	test02();

	system("pause");

	return 0;
}
*/