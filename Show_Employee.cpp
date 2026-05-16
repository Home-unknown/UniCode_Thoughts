#include"workerManager.h"
#include<iostream>
using std::cout, std::endl;

void WorkerManager::Show_Employee()
{
	if (this->m_FileIsEmpty == true)
	{
		cout << "文件不存在或文件为空" << endl;
	}
	else
	{
		for (int i = 0; i < m_EmployeeNum; i++)
		{
			//利用多态调用程序接口
			this->m_pointerEmpArray[i]->ShowInformation();	
		}
		cout << endl;
	}

	system("pause");
	system("cls");
}