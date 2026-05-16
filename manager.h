#pragma once
#include<iostream>
using std::string;

#include"Worker.h"

class Manager : public Worker
{
public:
	Manager(int id, string name, int dptid);
	
	virtual void ShowInformation();		//显示个人信息

	virtual string GetDepartmentName();	//获取岗位名称	
};