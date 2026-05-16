/*
#include<iostream>
#include<ctime>		//time系统时间头文件包含
using namespace std;
int main()
{
	int secret_num=0;
	int guess_num=0;
	int count_num = 0;
	
	srand((unsigned int)time(NULL));	//添加随机数种子 作用：利用当前系统时间生成随机数，防止每次随机数都一样
	secret_num = rand() % 100 + 1;		//生成0 +1 ~ 99 +1的随机数
	cout<<"猜数开始\n"<<endl;
	cout<<"已生成0~100中的一个数\n"<<endl;
	cout<<"输入一个数字\n"<<endl;

	while (1)
	{
		cin>>guess_num;
		count_num++;
		if (guess_num > secret_num)
		{
			cout<<"猜大了"<<endl;
		}
		else if (guess_num < secret_num)
		{
			cout << "猜小了" << endl;
		}
		else
		{
			cout << "猜对了" << endl;
			cout<<"猜的次数为："<<count_num<<endl;
            break;		//退出循环
		}
	}

system("pause");

return 0;
}
*/