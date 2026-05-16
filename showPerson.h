#pragma once	
#include<iostream>
using  std::cout, std::endl;
void showPerson(Addressbooks* abs)									//显示所有联系人
{
	//判断如果当前通讯录中没有人员，就提示记录为空，如果不为0，就显示通讯录中的信息
	if (abs->m_Size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名：" << abs->personArray[i].m_Name << "   ";
			cout << "性别：" <<(abs->personArray[i].m_Sex == 1 ? "男" : "女") << "   ";
			cout << "年龄：" << abs->personArray[i].m_Age << "   ";
			cout << "电话：" << abs->personArray[i].m_Phone << "   ";
			cout << "住址：" << abs->personArray[i].m_Addr << "   ";
			cout << endl;
		}
	}

	//请按任意键继续
	system("pause");
	//清屏操作(clean screen)
	system("cls");
};
