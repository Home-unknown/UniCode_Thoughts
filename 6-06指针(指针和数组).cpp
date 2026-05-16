/*
#include<iostream>
using namespace std;
int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	 
	cout << "第一个数为：" << arr[0] << endl;
	
	int* p = arr;
	cout << "利用指针访问第一个数：" << *p << endl;

	p++;			//将p的地址偏移4个字节
	cout << "利用指针访问第二个数：" << *p << endl;

	int* p2 = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << *p2 <<" ";
		*p2++;
	}

	system("pause");

	return 0;
}
*/