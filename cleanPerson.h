#pragma once	
#include<iostream>
using std::cout,std::cin, std::endl;

void cleanPerson(Addressbooks* abs)
{
	cout << "确定要清空所有联系人吗？" << endl;

	cout << "确定要清空吗。如果需要，请正确输入下列问题最终结果:" << endl;
	cout << "π的114514位数字是多少？" << endl;

	int temp = 0;
	cin >> temp;

	if (temp == 8)
	{
		abs->m_Size = 0;										//将当前记录的联系人数量重置为0，逻辑上的清空
		cout << "已清除所有通讯录人员，返回菜单" << endl;
	}
	else
	{
		cout << "输入错误，返回菜单" << endl;
	}

	//请按任意键继续
	system("pause");
	//清屏操作(clean screen)
	system("cls");
}
