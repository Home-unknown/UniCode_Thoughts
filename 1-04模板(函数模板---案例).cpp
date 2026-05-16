//案例描述：
//利用函数模板封装一个排序的函数，可以对不同数据类型数组进行排序
//排序规则从大到小，排序算法为选择排序
//分别利用char和int数组进行测试

/*
#include<iostream>
using namespace std;

template<typename T>
void MySwap(T& num1,T& num2)
{
	T temp = num1;
	num1 = num2;
	num2 = temp;
}

template<typename T>
void MySort(T arr[],int len)
{
	for (int i = 0; i < len ;i++)
	{
		int max = i;
		for (int j = i + 1; j < len; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}

		if (max != i)
		{
			MySwap(arr[max], arr[i]);
		}
	}
}

template<typename T>
void PrintArray(T arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test01()
{
	char charArray[] = "badcfe";

	int length = sizeof(charArray) / sizeof(char);

	MySort(charArray,length);

	PrintArray(charArray, length);
}

void test02()
{
	int IntArray[] = { 2,5,4,3,6,9,1,8,0,7 };

	int length = sizeof(IntArray) / sizeof(int);

	MySort(IntArray, length);

	PrintArray(IntArray, length);
}

int main()
{
	test01();

	test02();

	system("pause");

	return 0;
}
*/