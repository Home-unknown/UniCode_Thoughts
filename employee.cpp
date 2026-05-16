#include<iostream>
using std::string, std::cout, std::endl;

#include"employee.h"

Employee::Employee(int id, string name, int dptid)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DepartmentId = dptid;
}

void Employee::ShowInformation()
{
	cout << endl;
	cout << "职工编号：" << this->m_Id << "\t\t";
	cout << "职工姓名：" << this->m_Name << "\t\t";
	cout << "职工岗位：" << this->GetDepartmentName() << "\t\t";
	cout << "岗位职责：  完成经理交给的任务";
}

string Employee::GetDepartmentName()
{
	return "员工";
}
