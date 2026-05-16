#pragma once	
#include<iostream>
using std::cout,std::endl;

int isExist_modify(Addressbooks* abs, string name)
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

void modifyPerson(Addressbooks* abs)
{
	cout << "请输入需要修改的联系人：" << endl;

	string name_is;
	cin >> name_is;
	int ret = isExist_modify(abs, name_is);

	if (ret != -1)
	{
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		//性别
		int sex = 0;
		cout << "请输入性别" << endl;			//或者改成string类型，直接检测输入是否为1或2
		cout << "1---男		2---女" << endl;

		while (true)							//如果输入是1或2就退出循环。如果是其他，就重新输入
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Age = sex;
				break;
			}
			cout << "输入错误，请重新输入" << endl;

			//防止输入错误字符（如字母），使循环进入死循环
			//输入错误字符（如字母）导致下一次循环迭代cin仍然读取相同的非数字字符
			cin.clear();						//修复数据流
			cin.ignore();						//取走刚才中的数据流
		}

		//年龄
		int age = 0;
		cout << "请输入年龄" << endl;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		//电话
		string phoneNum;
		cout << "请输入电话号码" << endl;
		cin >> phoneNum;
		abs->personArray[ret].m_Phone = phoneNum;

		//住址
		string address;
		cout << "请输入住址" << endl;
		cin >> address;
		abs->personArray[ret].m_Addr = address;

		cout << "联系人修改成功" << endl;

	}
	else
	{
		cout << "查无此人，返回菜单" << endl;
	}

	//请按任意键继续
	system("pause");
	//清屏操作(clean screen)
	system("cls");

	return;
}
