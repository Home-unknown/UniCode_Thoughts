#include"workerManager.h"
#include<iostream>
using std::cout, std::cin, std::endl;

void WorkerManager::Sort_Employee()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "请输入排序方式： 1.升序	2.降序" << endl;

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

		for (int i = 0; i < m_EmployeeNum; i++)
		{
			int minOrMax = i;		//声明最大值或最小值下标
			for (int j = i + 1; j < this->m_EmployeeNum; j++)
			{
				if (select == 1)		//升序
				{
					if (this->m_pointerEmpArray[minOrMax]->m_Id > this->m_pointerEmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}
				else if (select == 2)	//降序
				{
					if (this->m_pointerEmpArray[minOrMax]->m_Id < this->m_pointerEmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}
				else { cout << "怎么会这样呢？" << endl; }
			}

			//判断 最大值或最小值 是不是 计算的最大值或最小值，	如果不是，交换数据
			if (i != minOrMax)
			{
				Worker* temp = this->m_pointerEmpArray[i];
				this->m_pointerEmpArray[i] = this->m_pointerEmpArray[minOrMax];
				this->m_pointerEmpArray[minOrMax] = temp;
			}
		}
	}

	cout << "排序成功！排序后的结果为：" << endl;
	this->SaveFile();				//保存到文件中			
	this->Show_Employee();			
	
	//接口已有按任意键清屏操作,这里不需要添加
}