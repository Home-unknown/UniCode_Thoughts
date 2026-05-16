#include<iostream>
using std::string, std::cout, std::endl;

#include"boss.h"

Boss::Boss(int id, string name, int dptid)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DepartmentId = dptid;
}

void Boss::ShowInformation()	//显示个人信息
{
	cout << endl;
	cout << "职工编号：" << this->m_Id << "\t\t";
	cout << "职工姓名：" << this->m_Name << "\t\t";
	cout << "职工岗位：" << this->GetDepartmentName() << "\t\t";
	cout << "岗位职责：  爽，想干什么干什么，并管理经理";
}

string Boss::GetDepartmentName()	//获取岗位名称	
{
	return "CEO";
}