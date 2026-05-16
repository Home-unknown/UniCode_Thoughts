#pragma once
#include<iostream>
using std::string;

//职工分为三类 : 普通员工、经理、老板
//将三种职工抽象到一个类（Worker）中，利用多态管理不同职工种类

//职工属性为：职工编号、职工姓名、职工所在部门编号
//职工行为为：岗位职责信息描述，获取岗位名称

class Worker
{
public:
	virtual void ShowInformation() = 0;		//显示个人信息

	virtual string GetDepartmentName() = 0;//获取岗位名称

	int m_Id;//职工编号

	string m_Name;//职工姓名

	int m_DepartmentId;//部门编号
};
