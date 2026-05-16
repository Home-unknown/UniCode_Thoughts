/*
#include<iostream>
using namespace std;
int main()
{
	//作用：1.比较相邻的元素。如果第一个比第二个大，就交换他们两个。
	//		2.对每一对相邻元素做同样的工作，执行完毕后，找到第一个最大值。
	//		3.重复以上操作，每次比较次数-1，直到不需要比较。

	//案例：将4,2,8,0,5,7,1,3,9进行升序排序

	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	
	cout << "排序前：" << endl;
	for (int a = 0; a < 9; a++)
	{
		cout << arr[a] << " ";
	}
	
	for (int i = 0; i < 9 -1; i++)	//总排序轮数 = 元素个数 -1
	{
		for (int j = 0; j < 9 - i - 1; j++)		//次数 = 元素个数 -当前轮数 -1
		{
			if (arr[j] >= arr[j + 1])		//比较相邻元素，判断是否交换
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	
	cout << "\n排序后"<<endl;
	for (int a = 0; a < 9; a++)
	{
		cout << arr[a] << " ";
	}

	system("pause");

	return 0;
}
*/
