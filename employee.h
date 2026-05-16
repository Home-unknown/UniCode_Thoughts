#pragma once
#include<iostream>
using std::string;

#include"Worker.h"

class Employee : public Worker					//普通员工类
{
public:
	Employee(int id, string name, int dptid);	//构造函数

	//重写纯虚函数，防止子类变成抽象类
	virtual void ShowInformation();				//显示个人信息

	virtual string GetDepartmentName();			//获取岗位名称
};



