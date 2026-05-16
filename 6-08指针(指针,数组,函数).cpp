/*
#include<iostream>
using namespace std;

void BubbleSort(int* arr,int len)					//冒泡排序
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void PrintArray(int* arr, int len)					//打印数组
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] <<" ";
	}
}

int main()
{
	//案例：封装一个函数，利用冒泡排序，实现对整型数组的升序排序
	//例如：int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };

	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };

	int len = sizeof(arr) / sizeof(arr[0]);			//计算数组长度

	BubbleSort(arr, len);

	PrintArray(arr, len);

	system("pause");			

	return 0;
}
*/