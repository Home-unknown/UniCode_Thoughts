/*
#include<iostream>
using namespace std;
int main()
{
	//案例1：在一个数组中记录了五只小猪的体重，如：300，350，200，400，250
	//找出并打印最重的小猪
	
	int arr1[5] = {300,350,200,400,250};

	int max = 0;	//访问数组中的每个元素，如果该元素比认定的最大值大，就更新最大值

	for (int i = 0; i <= 4; i++)
	{
		cout << "小猪的重量分别是：" << arr1[i] << endl;
		if (arr1[i] > max)
		{
			max = arr1[i];
		}
	}
	cout << "最重为：" << max << endl;	
	

	////////////////////////////////////////////////////////////////////////////////////////////////
	
	//案例2：数组元素逆置：请声明一个5个元素的数组，并且将该数组逆置
	//例如：1，2，3，4，5 改为：5，4，3，2，1
	int arr2[5] = { 2,4,8,16,32 };
	
	for (int j = 0; j <= 4; j++)
	{
		cout << "原数组为：" << arr2[j] << endl;
	}

	int start = 0;									//起始元素下标
	int end = sizeof(arr2) / sizeof(arr2[0]) - 1;	//末尾元素下标
	
	while (start < end)
	{
		//实现元素互换
		int temp = arr2[start];							//临时变量
		arr2[start] = arr2[end];
		arr2[end] = temp;

		//下标更新
		start++;
		end--;
	}
	
	for (int a = 0;  a<= 4; a++)
	{
		cout << "逆置后为：" << arr2[a] << endl;
	}
	



	system("pause");

	return 0;
}
*/