/*
#include<iostream>
using namespace std;
int main()
{
	//用途：1.可以统计整个数组在内存中的长度
	//		2.可以获取数组在内存中的首地址

	int arr[5] = { 1,2,3,4,5 };
	cout << "整个数组占用的内存为：" << sizeof(arr) << endl;
	cout << "单个元素占用的内存为：" << sizeof(arr[0]) << endl;
	cout << "数组中的元素个数为："<< sizeof(arr)/sizeof(arr[0]) << endl;

	//////////////////////////////////////////////////////////////////////////////////////
	
	cout << "（16）数组首地址为：" << arr << endl;					//一般为16进制
	cout << "（10）数组首地址为：" << (int)arr << endl;				//将16进制转为10进制
	cout << "数组中第一个元素的地址为：" << (int)&arr[0] << endl;	//& 详见指针
	cout << "数组中第二个元素的地址为：" << (int)&arr[1] << endl;
		
	//数组名是一个常量，不可以赋值
	//arr = 100;  (错误)

	system("pause");

	return 0;
}
*/