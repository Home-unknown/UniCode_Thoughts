#include"workerManager.h"
#include<iostream>
using std::cout, std::cin, std::endl, std::string;

void WorkerManager::Find_Employee()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
		return;
	}
	else
	{
		cout << "请输入查找方式：" << endl;
		cout << "1.按职工编号查找		2.按职工姓名查找" << endl;
	}

	int select = 0;
	while (true)
	{
		cin >> select;

		if (cin.good() == 0)
		{
			cin.clear();
			cin.ignore();

			system("cls");
			cout << "---------------------------" << endl;
			cout << "-无法理解的命令,请重新输入-" << endl;
			cout << "---------------------------" << endl;
			cout << endl;
		}
		else
		{
			if (select == 1 || select == 2)
			{
				break;
			}
		}
	}
		
	if (select == 1)			//按编号查找
	{
		int id = 0;
		cout << "请输入查找的职工编号：" << endl;
		cin >> id;

		int ret = IsExit(id);
		if (ret != -1)
		{
			cout << "查找成功！该职工的信息如下：";
			this->m_pointerEmpArray[ret]->ShowInformation();
			cout << endl;
		}
		else
		{
			cout << "查找失败！" << endl;
			system("pause");
			system("cls");
			return;
		}	
	}
	else if (select == 2)		//按姓名查找
	{
		string name;
		cout << "请输入要查找的职工姓名：" << endl;
		cin >> name;

		bool flag = false;				//创建是否查到的标志（默认查不到）

		for (int i = 0; i < m_EmployeeNum; i++)
		{
			if (this->m_pointerEmpArray[i]->m_Name == name)
			{
				cout << "查找成功,该员工信息如下：";
				this->m_pointerEmpArray[i]->ShowInformation();
				cout << endl;
				flag = true;
			}
		}

		if (flag == false)
		{
			cout << "未找到该员工" << endl;
		}
	}
	else
	{
		system("cls");
		cout << "---------------------------" << endl;
		cout << "-无法理解的命令,请重新输入-" << endl;
		cout << "---------------------------" << endl;
		cout << endl;
	}

	system("pause");
	system("cls");
}