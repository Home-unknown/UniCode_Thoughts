#pragma once			//防止头文件重复包含
#include<iostream>

#include"Worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"

#include<fstream>
#define FILENAME "empFile.txt"

class WorkerManager
{
public:
	void SecretInformation();			//神秘小代码

	WorkerManager();					//构造函数

	~WorkerManager();					//析构函数

	void Show_Menu();					//展示菜单

	void ExitSystem();					//退出系统

	int m_EmployeeNum;					//记录职工人数

	Worker** m_pointerEmpArray;			//职工数组指针	

	void Add_Employee();				//添加职工函数

	void SaveFile();					//保存文件函数

	bool m_FileIsEmpty;					//成员属性：标志文件是否为空

	int Get_EmpNum();					//统计文件中人数函数

	void Initialize_Employee();			//初始化员工（先读取保存在文件中的员工）

	void Show_Employee();				//展示员工信息

	void DeleteEmployee();				//删除员工函数

	int IsExit(int id);					//判断职工是否存在函数	存在返回职工在数组中的位置，不存在返回-1

	void Modify_Employee();				//修改职工函数

	void Find_Employee();				//查找员工函数

	void Sort_Employee();				//排序员工编号函数

	void Clean_File();					//清空所有信息
};
