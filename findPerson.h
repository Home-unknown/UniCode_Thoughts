#pragma once	
#include<iostream>
using  std::cout, std::cin, std::endl,std::string;

int isExist_find(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;
		}
	}

	return -1;		//如果遍历结束都没找到，返回-1，结束循环
}

void findPerson(Addressbooks* abs)
{
	cout << "请输入要查找的联系人" << endl;
	string name;
	cin >> name;

	//判断指定联系人是否存在于通讯录中
	int ret = isExist_find(abs, name);

	if (ret != -1)
	{
		cout << "姓名：" << abs->personArray[ret].m_Name << "   ";
		cout << "性别：" << (abs->personArray[ret].m_Sex == 1 ? "男" : "女") << "   ";
		cout << "年龄：" << abs->personArray[ret].m_Age << "   ";
		cout << "电话：" << abs->personArray[ret].m_Phone << "   ";
		cout << "住址：" << abs->personArray[ret].m_Addr << "   ";
	}
	else
	{
		cout << "查无此人，返回菜单" << endl;
	}

	//请按任意键继续
	system("pause");
	//清屏操作(clean screen)
	system("cls");
}
