//案例描述：编写一个程序，输入一个字符串，保留第一次出现的字符
//如：hello		->		helo

/*
#include<stdio.h>
#include<stdbool.h>
#define MAX 100

int main()
{
	char Arr1[MAX] = "aPersonCalledHuCongYingIsAPig";
	char Arr2[MAX];

	bool temp[256] = { false };				//布尔数组中只有0或1  ASCLL码一共256个

	int i, j = 0;

	for (i = 0; i < MAX; i++)
	{
		char string = Arr1[i];				//用string接收Arr1中的元素

		//判断Arr中元素是否在temp中出现，若没出现则存入temp，若出现则忽略
		if (!temp[string])
		{
			Arr2[j++] = string;

			temp[string] = true;			//标记string代表的元素出现过了
		}
	}

	printf("%s", Arr2);

	return 0;
}
*/