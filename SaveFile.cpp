#include"workerManager.h"
#include<iostream>
using std::cout, std::endl, std::ofstream,std::ios;

void WorkerManager::SaveFile()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);

	for (int i = 0; i < this->m_EmployeeNum; i++)
	{
		ofs << this->m_pointerEmpArray[i]->m_Id << " ";
		ofs << this->m_pointerEmpArray[i]->m_Name << " ";
		ofs << this->m_pointerEmpArray[i]->m_DepartmentId << " " << endl;
		
	}

	ofs.close();
} 