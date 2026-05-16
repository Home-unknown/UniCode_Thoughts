/*
#include<iostream>
using namespace std;
int main()
{
	//选择结构 嵌套if语句
	//用户输入分数，如果分数大于400，视为考上大学，在屏幕上输出 如果没考大学，打印未考上大学
	//在一本中，如果大于700分则考上清华，大于650则考上北大，大于610则考上人大
	int score = 0;
	cout << "请输入一个分数" << endl;
	cin >> score;								//用户输入分数
	cout << "您的分数为：" << score << endl;	//打印用户输入的分数
	if (score >= 600)
	{
		cout << "恭喜您考上一本大学" << endl;	//判断用户是否考上一本

		if (score >= 700)
		{
			cout << "恭喜您考上清华大学" << endl;	//判断用户是否考上清华
		}
		else if (score >= 650)
		{
			cout << "恭喜您考上北京大学" << endl;	//判断用户是否考上北大
		}
		else if (score >= 610)
		{
			cout << "恭喜您考上人民大学" << endl;	//判断用户是否考上人大
		}

	}
	else if (score >= 500)
	{
		cout << "恭喜您考上二本大学" << endl;	//判断用户是否考上二本
	}
	else if (score >= 400)
	{
		cout << "恭喜您考上三本大学" << endl;	//判断用户是否考上三本
	}
	else
	{
		cout << "您真是个垃圾" << endl;
	}

	system("pause");

	return 0;
}
*/