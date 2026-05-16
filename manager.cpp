#include<iostream>
using std::string, std::cout, std::endl;

#include"manager.h"

Manager::Manager(int id, string name, int dptid)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DepartmentId = dptid;
}

void Manager::ShowInformation()		//显示个人信息
{
	cout << endl;
	cout << "职工编号：" << this->m_Id << "\t\t";
	cout << "职工姓名：" << this->m_Name << "\t\t";
	cout << "职工岗位：" << this->GetDepartmentName() << "\t\t";
	cout << "岗位职责：  完成CEO交给的任务，并管理员工";
}

string Manager::GetDepartmentName()	//获取岗位名称	
{
	return "经理";
}
