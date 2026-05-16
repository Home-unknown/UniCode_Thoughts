/*
#include<iostream>
using namespace std;
int main()
{
	//水仙花数是指一个3位数，它的每个位上的数字的3次幂之和等于它本身
	//例如：1^3+5^3+3^3=153
	//案例；用do...while求出所有3位数中的水仙花数

	int num = 100;
	do
	{
	int a = 0;
	a = num % 10;				//获取个位：153%10=3			对数字取模于10，得到个位
	
	int b = 0;
	b = num / 10 %10;			//获取十位：153/10=15 15%10=5	先整除于10，得到两位数，再取模于10，得到十位
	
	int c = 0;
	c = num / 100;				//获取百位：153/100=1			直接整除于100，得到百位

	if (a * a* a + b * b * b + c * c * c == num)			//判断：个位^3 + 十位^3 + 百位^3 = 本身
	{
		cout << num << endl;
	}

	num++;						//找到下一个数
	} 
	while (num < 1000);

	system("pause");

	return 0;
}
*/