#include"workerManager.h"
#include<iostream>
#include<fstream>
using std::cout, std::cin, std::endl, std::ofstream, std::ios;

void WorkerManager::Clean_File()
{
	cout << "确定要清空吗？	 1.确定	  2.取消" << endl;
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

		if (select == 1 || select == 2)
		{
			break;
		}
		else
		{
			cin.clear();
			cin.ignore();

			system("cls");
			cout << "---------------------------" << endl;
			cout << "-无法理解的命令,请重新输入-" << endl;
			cout << "---------------------------" << endl;
			cout << endl;
		}
	}

	if (select == 1)
	{
		ofstream ofs(FILENAME, ios::trunc);
		ofs.close();

		if (this->m_pointerEmpArray != NULL)
		{ 
			for (int i = 0; i < this->m_EmployeeNum; i++)		//删除堆区的每个职工对象
			{
				delete this->m_pointerEmpArray[i];
				this->m_pointerEmpArray[i] = NULL;
			}

			delete[] this->m_pointerEmpArray;
			this->m_pointerEmpArray = NULL;
			this->m_EmployeeNum = 0;
			this->m_FileIsEmpty = true;
		}

		cout << "清空成功" << endl;
	}
	else if (select == 2)
	{
		cout << "成功取消操作！" << endl;
		return;
	}

	system("pause");
	system("cls");
}