//修改职工：能够按照职工的编号对职工信息进行修改并保存

#include<iostream>
#include"WorkerManager.h"
using std::cout, std::cin, std::endl, std::string;

void WorkerManager::Modify_Employee()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或文件为空" << endl;
	}
	else
	{
		int id = 0;
		while (true)
		{
			cout << "（int）请输入需要修改员工的编号" << endl;
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

		int ret = this->IsExit(id);

		if (ret != -1)								//查找到编号的职工
		{
			delete this->m_pointerEmpArray[ret];	//先将该职工的相关信息删除

			int newId = 0;
			string newName;
			int newDptSelect;

			Worker* worker_pointer = NULL;

			cout << "查找到了编号为：" << id << " 的职工" << endl;

			while (true)
			{
				cout << "（int）请输入该职工新编号：" << endl;
				cin >> newId;

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
				cout << "（string）请输入职工新姓名" << endl;
				cin >> newName;

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

			while (true)
			{
				cout << "（int）请选择该职工的岗位:	 1.普通职工	  2.经理	3.老板" << endl;
				cin >> newDptSelect;

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
					switch (newDptSelect)
					{
					case 1:
						worker_pointer = new Employee(newId, newName, 1);
						break;
					case 2:
						worker_pointer = new Manager(newId, newName, 2);
						break;
					case 3:
						worker_pointer = new Boss(newId, newName, 3);
						break;
					default:
						system("cls");
						cout << "---------------------------" << endl;
						cout << "-无法理解的命令,请重新输入-" << endl;
						cout << "---------------------------" << endl;
						cout << endl;
						break;
					}
					break;
				}
			}

			this->m_pointerEmpArray[ret] = worker_pointer;	//更新数据到数组中

			cout << "修改成功！" << endl;

			this->SaveFile();								//保存到文件中
		}
		else
		{
			cout << "修改失败，查无此人" << endl;
		}

		system("pause");
		system("cls");

	}
}