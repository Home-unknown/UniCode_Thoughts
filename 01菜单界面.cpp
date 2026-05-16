#include<iostream>
using namespace std;

//封装函数显示该界面	如：void showMenu()
//在main函数中调用封装好的函数

void showMenu()				//菜单界面
{
	cout << "***********************" << endl;
	cout << "*****1.添加联系人:*****" << endl;
	cout << "*****2.显示联系人:*****" << endl;
	cout << "*****3.删除联系人:*****" << endl;
	cout << "*****4.查找联系人:*****" << endl;
	cout << "*****5.修改联系人:*****" << endl;
	cout << "*****6.清空联系人:*****" << endl;
	cout << "*****7.退出通讯录:*****" << endl;
	cout << "***********************" << endl;
}

int main()
{
	showMenu();

	system("pause");

	return 0;
}