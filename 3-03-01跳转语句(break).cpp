/*
#include<iostream>
using namespace std;
int main()
{
	//break
	//作用：用于跳出选择结构或者循环结构
	//时机：switch语句中 终止case并跳出switch	
	//		循环语句中	 跳出当前的循环语句
	//		嵌套循环中	 跳出最内层循环语句

	cout << "请选择副本难度" << endl;
	cout << "1.普通 2.中等 3.困难" << endl;

	int select = 0;
	cin >> select;

	switch (select)
	{
	case 1:
		cout << "您选择的是普通难度" << endl;
		break;
	case 2:
		cout << "您选择的是中等难度" << endl;
		break;
	case 3:
		cout << "您选择的是困难难度" << endl;
		break;
	}




	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			break;
		}

		cout << i << endl;
	}
	




	for (int i = 0 ; i <= 11 ; i++) 
	{
		for (int j = 0; j <= 11; j++)
		{
			if (j == 5)
			{
				break;
			}
			cout << "* ";
		}
		cout << endl;
	}




	system("pause");

	return 0;
}
*/