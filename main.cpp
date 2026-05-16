#include"workerManager.h"

#include"Worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"

#include<windows.h>		//system("cls");	system("pause");
#include<string>
using std::cin, std::cout, std::endl, std::string;

int main()
{
	WorkerManager wm;	//实例化管理者对象

	int choice = 0;
	while (true)
	{
		while (true)				//解决输入异常问题
		{
			wm.Show_Menu();				//展示菜单
			cout << "请输入您的选择：" << endl;
			cin >> choice;

			//如果输入类型不是int,则不进入分支语句
			if (cin.good() == 0)
			{	
				cin.clear();
				cin.ignore();

				system("cls");
				cout << "---------------------------" << endl;
				cout << "-无法理解的命令,请重新输入-" << endl;
				cout << "---------------------------" << endl;
				cout << endl;
			}
			else
			{
				break;
			}
		}

		switch (choice)
		{
		case 0:		//退出程序
			wm.ExitSystem();
			break;
		case 1:		//增加职工
			wm.Add_Employee();
			break;
		case 2:		//显示职工
			wm.Show_Employee();
			break;
		case 3:		//删除职工
			wm.DeleteEmployee();
			break;
		case 4:		//修改职工
			wm.Modify_Employee();
			break;
		case 5:		//查找职工
			wm.Find_Employee();
			break;
		case 6:		//排序职工
			wm.Sort_Employee();
			break;
		case 7:		//清空文档
			wm.Clean_File();
			break;
		case 8:		//神秘小程序
			wm.SecretInformation();
			break;

		default:	//输入范围以外的数字
			system("cls");
			cout << "---------------------------" << endl;
			cout << "-无法理解的命令,请重新输入-" << endl;
			cout <<	"---------------------------" << endl;
			cout << endl;
			break;
		}
	}
	return 0;
}