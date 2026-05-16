#include"workerManager.h"
#include<iostream>
using std::ifstream, std::ios;

void WorkerManager::Initialize_Employee()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dptId;

	int index = 0;		//索引
	while (ifs >> id && ifs >> name && ifs >> dptId)
	{
		Worker* worker_pointer = NULL;

		if (dptId == 1)			//普通职工
		{
			worker_pointer = new Employee(id, name, dptId);
		}
		else if (dptId == 2)	//经理
		{
			worker_pointer = new Manager(id, name, dptId);
		}
		else if (dptId == 3)	//老板
		{
			worker_pointer = new Boss(id, name, dptId);
		}

		this->m_pointerEmpArray[index] = worker_pointer;

		index++;
	}

	ifs.close();
}