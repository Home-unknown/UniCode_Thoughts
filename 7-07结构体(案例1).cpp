/*
#include<iostream>
#include<string>
#include<ctime>
using namespace std;

//案例：学校正在做毕业项目，每名老师带领5个学生，总共3名老师，需求如下：
//1.设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
//2.学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带学生赋值
//3.最终打印老师数据以及老师所带的学生数据

struct student
{
	string sName;		//打印学生姓名
	int score = 0;		//分数
};

struct teacher
{
	string tName;						
	struct student sArray[5];			//创建学生结构体数组
};

void allocateSpace(struct teacher tArray[], int len)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];

		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];
			
			
			int random = rand() % 61 + 40;			//0 +40 ~ 60 +1
			tArray[i].sArray[j].score = random;
		};
	};
};

void printInfo(struct teacher tArray[], int len)
{
	for (int i = 0; i < 3; i++)
	{
		cout << "老师姓名：" << tArray[i].tName << endl;

		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名：" << tArray[i].sArray[j].sName;
			cout << "\t学生分数：" << tArray[i].sArray[j].score << endl;
		};	

		cout << endl;
	};

};

int main()
{	
	srand((unsigned int)time(NULL));						//添加随机数种子 作用：利用当前系统时间生成随机数，防止每次随机数都一样

	struct teacher tArray[3];								//创建三名老师数组

	int len = sizeof(tArray) / sizeof(tArray[0]);			//计算有多少名老师

	allocateSpace(tArray, len);

	printInfo(tArray, len);

	system("pause");

	return 0;
}
*/