//读文件
//功能描述：将文件的内容读取到程序中
//虽然实现了添加职工后保存到文件中的操作，但是每次开始运行程序，并没有将文件中数据读取到程序中
//而程序还要求提供清空文件的需求

//因此构造函数初始化数据的情况分为三种：
//1.第一次使用，文件未创建
//2.文件存在，但是用户数据被清空		eof = -1
//3.文件存在，并且保存职工的所有数据

#pragma warning(disable:26495)		//禁止未初始化报错

#include"workerManager.h"
#include<iostream>
using std::ifstream, std::ios, std::cout, std::endl;

WorkerManager::WorkerManager()		//构造函数
{
	ifstream ifs;
	ifs.open(FILENAME,ios::in);

	//文件不存在
	if (!ifs.is_open())
	{
		cout << "---------------------------" << endl;			//文件不存在
		cout << "--------文件不存在！-------" << endl;
		cout << "---------------------------" << endl;
		cout << endl;
		
		//初始化属性
		this->m_EmployeeNum = 0;			//初始化记录人数

		this->m_pointerEmpArray = NULL;		//初始化数组指针(二级指针)

		this->m_FileIsEmpty = true;			//初始化文件是否为空

		ifs.close();
		return;
	}

	//文件存在，但数据为空
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "---------------------------" << endl;			//文件为空
		cout << "---------文件为空！--------" << endl;
		cout << "---------------------------" << endl;
		cout << endl;		

		this->m_EmployeeNum = 0;			
		this->m_pointerEmpArray = NULL;		
		this->m_FileIsEmpty = true;			
		ifs.close();
		return;
	}

	//文件存在，且数据不为空
	int num = this->Get_EmpNum();

	cout << "---------------------------" << endl;				 //文件存在，且数据不为空
	cout << "---当前职工人数为：" << num << "\t---" << endl;
	cout << "---------------------------" << endl;
	cout << endl;

	this->m_EmployeeNum = num;

	//开辟空间 初始化员工指针数组（除文件中保存的人数）
	this->m_pointerEmpArray = new Worker * [this->m_EmployeeNum]; //初始化人数
	this->Initialize_Employee();								  //初始化具体信息

	//for (int i = 0; i < this->m_EmployeeNum; i++)
	//{
	//	cout << this->m_pointerEmpArray[i]->m_Id << " ";
	//	cout << this->m_pointerEmpArray[i]->m_Name << " ";
	//	cout << this->m_pointerEmpArray[i]->m_DepartmentId << " ";
	//	cout << endl;
	//} 
};

WorkerManager::~WorkerManager()		//析构函数
{
	if (this->m_pointerEmpArray != NULL)
	{
		delete[] this->m_pointerEmpArray;
		this->m_pointerEmpArray = NULL;
	}
};


