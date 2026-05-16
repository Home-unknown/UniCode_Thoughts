//删除员工：
//功能描述：按照职工编号进行删除职工的操作

//思路：逻辑删除
//先将指定位置的元素删除，再将数组前移。而不是先移动数组，再删除

#include"WorkerManager.h"
#include<iostream>
using std::cout, std::cin, std::endl;

void WorkerManager::DeleteEmployee()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
		system("pause");
		system("cls");

		return;
	}

	int id = 0;
	while(true)
	{ 
		cout << "（int）请输入要删除职工的编号" << endl;
		cin >> id;
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
			break;
		}
	}

	int index = this->IsExit(id);

	if (index != -1)				//说明职工存在，并且要删除掉index位置上的职工
	{
		for (int i = index; i < this->m_EmployeeNum - 1; i++)
		{
			this->m_pointerEmpArray[i] = this->m_pointerEmpArray[i + 1];
		}

		this->m_EmployeeNum--;		 //更新数组中的人员个数

		this->SaveFile();			 //数据同步到文件中

		cout << "删除成功！" << endl;	
	}
	else
	{
		cout << "删除失败，未找到该职工!" << endl;
	}
	
	system("pause");
	system("cls");

	return;
}
