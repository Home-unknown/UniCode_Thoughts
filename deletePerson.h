#pragma once	
#include<iostream>
using  std::cout, std::cin, std::endl;

//1.检测联系人是否存在：
//删除联系人前，需要先判断用户输入的联系人是否存在，
//如果存在，则删除；不存在提示用户没有要删除的联系人,检测联系人是否存在封装成一个函数中，
//如果存在，返回联系人在通讯录中的位置，不存在返回 -1

int isExist_delete(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;
		}
	}

	return -1;		//如果遍历结束都没找到，返回-1，结束循环
}

//2.删除联系人函数
//根据用户输入的联系人判断该通讯录中是否有此人
//查找到进行删除，并提示删除成功
//查找不到，提示查无此人
void deletePerson(Addressbooks* abs)
{
	cout << "请输入删除联系人的姓名：" << endl;
	string name;
	cin >> name;
	int ret = isExist_delete(abs, name);

	if ( ret == -1)
	{
		cout << "查无此人，返回菜单" << endl;

		//请按任意键继续
		system("pause");
		//清屏操作(clean screen)
		system("cls");

		return;
	}
	else
	{
		cout << "找到此人" << endl;
		cout << "确定要删除吗。如果需要，请正确输入下列问题最终结果" << endl;
		cout << "定积分 ∫（从0到π/2）(sinx)^2 dx 的结果（π取3.14，保留整数）" << endl;
		int num = 0;
		cin >> num;

		//将当前元素后的元素向前移动，并让通讯录中人数-1
		//注意如果元素位于数组末尾，其实未真正删除这个元素，只是不显示而已，而它还存在于数组中
		//解决方法：MAX设置时+1但仍然以MAX作为判断通讯录满员的标准
		if (num == 2)		
		{
			for (int i = ret; i < abs->m_Size; i++)
			{
				abs->personArray[i] = abs->personArray[i + 1];	//逻辑删除，通过后一个元素覆盖当前元素实现删除
			}

			abs->m_Size--;			//更新通讯录中人数，通讯录中人数-1

			cout << "删除成功，返回菜单" << endl;

			//请按任意键继续
			system("pause");
			//清屏操作(clean screen)
			system("cls");

			return;
		}
		else
		{
			cout << "输入错误，返回菜单" << endl;

			//请按任意键继续
			system("pause");
			//清屏操作(clean screen)
			system("cls");

			return;
		}
	}
}
