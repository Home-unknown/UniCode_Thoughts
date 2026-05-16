//判断职工是否存在
//很多功能都要用到判断职工是否存在：删除职工	修改职工	查找职工
//所以封装函数便于后续使用

#include"WorkerManager.h"
#include<iostream>

int WorkerManager::IsExit(int id)
{
	int index = -1;

	for (int i = 0; i < this->m_EmployeeNum; i++)
	{
		if (this->m_pointerEmpArray[i]->m_Id == id)
		{
			index = i;		//找到目标职工
			break;
		}
	}

	return index;
}
