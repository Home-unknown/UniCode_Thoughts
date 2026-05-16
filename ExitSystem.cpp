#include"workerManager.h"
#include<iostream>
using std::cout, std::endl;

void WorkerManager::ExitSystem()
{
	cout << "欢迎下次使用！" << endl;

	system("pause");

	//exit(0)编译器自带，无论运行到什么程度，此函数一旦被调用，立即结束程序
	exit(0);		
}