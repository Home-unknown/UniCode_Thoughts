#include"workerManager.h"
#include<iostream>
using std::ifstream, std::ios;

int WorkerManager::Get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	
	int id;
	string name;
	int dptId;

	int num = 0;		//统计人数的变量

	while (ifs >> id && ifs >> name && ifs >> dptId)		//ifs读数据时遇到 Tab Space Enter 时会视作终止符
	{
		num++;
	}

	return num;
}