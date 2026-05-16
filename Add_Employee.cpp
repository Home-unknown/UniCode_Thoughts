//添加职工：
//功能描述：批量添加员工，并保存到文件中

//分析：
//用户在批量创建时，可能会创建不同种类的职工
//如果想将所有不同种类的员工都放到一个数组中，可以将所有员工的指针维护在一个数组里
//如果想在程序中维护这个不定长度的数组，可以将数组创建到堆区，并利用 Worker** 的指针维护

#pragma warning(disable:6386)		//禁止缓冲区溢出报错

#include"workerManager.h"
#include<iostream>
using std::cout, std::endl, std::cin;

void WorkerManager::Add_Employee()
{
	cout << "请输入添加职工的数量：" << endl;

	int addNum = 0;		//保存用户输入的数量

	cin >> addNum;

	if (addNum > 0)
	{
		//添加
		//计算添加空间大小
		int newSize = this->m_EmployeeNum + addNum;		//新空间大小 = 原来记录人数 + 新增人数

		//开辟新空间	new 类型名*[]	开辟指针数组的空间
		Worker** newSpace = new Worker* [newSize];

		//将原来空间下的数据拷贝到新空下
		if (this->m_pointerEmpArray != NULL)//判断原来空间下是否有数据
		{
			for (int i = 0; i < this->m_EmployeeNum; i++)
			{
				newSpace[i] = this->m_pointerEmpArray[i];
			}
		}

		//添加新数据
		for (int i = 0; i < addNum; i++)
		{
			int id = 0;			//职工编号
			string name;		//职工姓名
			int dSelect = 0;	//部门选择

			Worker* worker_pointer = NULL;

			while (true)
			{
				cout << "（int）请输入第 " << i + 1 << " 个新职工编号" << endl;
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
					if (IsExit(id) != -1)
					{
						cout << "编号重复，请重新输入" << endl;
					}
					else
					{
						break;
					}
				}
			}

			while (true)
			{
				cout << "（string）请输入第 " << i + 1 << " 个新职工姓名" << endl;
				cin >> name;

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
			
			while(true)
			{ 
				cout << "（int）请选择该职工的岗位:	 1.普通职工	  2.经理	3.老板" << endl;
				cin >> dSelect;

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
					switch (dSelect)
					{
					case 1:
						worker_pointer = new Employee(id, name, 1);
						break;
					case 2:
						worker_pointer = new Manager(id, name, 2);
						break;
					case 3:
						worker_pointer = new Boss(id, name, 3);
						break;
					default:
						system("cls");
						cout << "---------------------------" << endl;
						cout << "-无法理解的命令,请重新输入-" << endl;
						cout << "---------------------------" << endl;
						cout << endl;
						break;
					}

					if (dSelect == 1 || dSelect == 2 || dSelect == 3)
					{
						break;
					}
				}
			}
			newSpace[this->m_EmployeeNum + i] = worker_pointer;		//将创建的职工指针，保存到职工(指针)数组中
		}

		delete[] this->m_pointerEmpArray;		//释放原有的内存空间

		this->m_pointerEmpArray = newSpace;		//更改新空间指向

		
		this->m_EmployeeNum = newSize;			//更新新的职工人数

		this->m_FileIsEmpty = false;			//更新职工不为空

		this->SaveFile();						//保存数据到文件中
		
		cout << "成功添加 " << addNum << " 名新职工" << endl;		//提示添加成功
	}
	else
	{
		cout << "---------------------------" << endl;
		cout << "-无法理解的命令,请重新输入-" << endl;
		cout << "---------------------------" << endl;
		cout << endl;
	}

	system("pause");
	system("cls");
}