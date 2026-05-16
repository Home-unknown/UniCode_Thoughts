#include<iostream>
#include<string>			//string结构体
#include<windows.h>			//system("cls")
using  std::cout, std::cin, std::endl, std::string;
#define MAX 11

struct Person
{
	string m_Name;			//姓名
	int m_Sex=0;			//1.男	2.女
	int m_Age=0;			//年龄
	string m_Phone;			//电话
	string m_Addr;			//住址   
};

struct Addressbooks
{
	struct Person personArray[MAX];				//通讯录中保存的联系人数组

	int m_Size=0;								//通讯录中当前记录联系人个数
};

#include"showMenu.h"
#include"showPerson.h"
#include"addPerson.h"
#include"deletePerson.h"
#include"findPerson.h"
#include"modifyPerson.h"
#include"cleanPerson.h"

int main()
{
	//创建通讯录结构体变量
	Addressbooks abs;		

	//初始化通讯录中当前人员个数
	abs.m_Size= 0;			

	//创建用户选择输入的变量
	int select = 0;			

	//功能描述：退出通讯录系统
	//思路：根据用户的不同选择，进入不同的功能，可以选择switch分支结构，将整个架构进行搭建；
	//当用户选择0时候，执行退出，选择其他先不做操作，也不会退出程序
	while (true)				
	{							
		showMenu();				
								
		cin >> select;

		switch (select)
		{

		//1.添加联系人														
		//功能描述：实现添加联系人功能，联系人上限为1000人，联系人包括：姓名、性别、年龄、联系电话、家庭住址
		//思路：1.设计联系人结构体	2.设计通讯录结构体	3.main函数中创建通讯录	4.封装添加联系人函数	5.测试添加联系人功能
		case 1:
			addPerson(&abs);	//利用地址传递，可以修饰实参
			break;

		//2.显示联系人
		//功能描述：显示通讯录中已有的联系人信息
		//步骤：1.封装显示联系人函数	2.测试显示联系人功能
		//思路：判断如果当前通讯录中没有人员，就提示记录为空，人数大于0，就显示通讯录中的信息
		case 2:
			showPerson(&abs);									
			break;	
			
		//3.删除联系人
		//功能描述：按照姓名进行删除指定联系人
		//步骤：1.封装检测联系人是否存在  2.封装删除联系人函数  3.测试删除联系人功能
		//思路：(见具体头文件)
		case 3:
		//用括号括起来的目的是：确保分支语句不会被其他分支使用(不加括号默认case后第一行代码)
		{		
			deletePerson(&abs);
			break;
		}

		//4.查找联系人
		//功能描述：按照姓名查看指定联系人信息
		//步骤：1.封装查找联系人函数  2.测试查找联系人
		//思路：判断用户指定的联系人是否存在，如果存在则显示信息，如果不存在则提示查无此人
		case 4:
			findPerson(&abs);
			break;	
		
		//5.修改联系人
		//功能描述：按照姓名重新修改信息
		//步骤：1.封装修改联系人函数  2.测试修改联系人功能
		//思路：查找用户输入的联系人，如果查找成功，进行修改操作，查找失败提示查无此人
		case 5:
			modifyPerson(&abs);
			break;	

		//6.清空联系人
		//功能描述：清空通讯录中的所有信息
		//步骤：1.封装清空联系人函数  2.测试清空联系人
		//思路：将通讯录所有联系人信息清除掉，只要将通讯录记录的联系人数量重置为0，做逻辑清空即可
		case 6:
			cleanPerson(&abs);
			break;	

		//0.退出通讯录
		case 0:
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;	

		default:
			break;
		};
	};

	system("pause");
	return 0;
};