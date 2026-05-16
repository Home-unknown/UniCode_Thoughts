#pragma once	
#include<iostream>
using  std::cout, std::cin, std::endl;

void addPerson(Addressbooks* abs)
{
	//-1的目的详见deletePerson头文件
	if (abs->m_Size == MAX-1)	//判断通讯录是否已满，如果满了就不再添加
	{
		cout << "通讯录已满，无法添加！";
		return;
	}
	else					//添加联系人
	{
		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//性别
		int sex = 0;
		cout << "请输入性别" << endl;			//或者改成string类型，直接检测输入是否为1或2
		cout << "1---男		2---女" << endl;

		while (true)							//如果输入是1或2就退出循环。如果是其他，就重新输入
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Age = sex;
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
		abs->personArray[abs->m_Size].m_Age = age;

		//电话
		string phoneNum;
		cout << "请输入电话号码" << endl;
		cin >> phoneNum;
		abs->personArray[abs->m_Size].m_Phone = phoneNum;

		//住址
		string address;
		cout << "请输入住址" << endl;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//更新通讯录人数
		abs->m_Size++;

		cout << "信息添加成功" << endl;

		//请按任意键继续
		system("pause");
		//清屏操作(clean screen)
		system("cls");
	};
};