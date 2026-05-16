/*
#include<iostream>
using namespace std;		//暂时使用，不做优化
int main()
{
	//选择结构 if语句 练习
	//三只小猪判断体重，并找到最重的猪
	int pig1 = 0;
	int pig2 = 0;
	int pig3 = 0;

	cout << "请输入小猪1的体重" << endl;
	cin >> pig1;
	cout << "请输入小猪2的体重" << endl;
	cin >> pig2;
	cout << "请输入小猪3的体重" << endl;
	cin >> pig3;

	cout << "pig1的体重为：" << pig1 << endl;
	cout << "pig2的体重为：" << pig2 << endl;
	cout << "pig3的体重为：" << pig3<< endl;

	if (pig1 > pig2)		//1比2重
	{
		if (pig1 > pig3)
		{
			cout << "小猪1最重" << endl;
		}
		else
		{
			cout << "小猪3最重" << endl;
		}
	}
	else if (pig1 > pig3)	//1比3重
	{
		if (pig1 > pig2)	
		{

			cout << "小猪1最重" << endl;
		}
		else
		{
			cout << "小猪2最重" << endl;
		}
	}
	else 		//2比1重
	{
		if (pig2 > pig3)
		{
			cout << "小猪2最重" << endl;
		}
		else
		{
			cout << "小猪3最重" << endl;
		}
	}

	system("pause");

	return 0;
}
*/