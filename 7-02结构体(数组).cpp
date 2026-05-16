/*
#include<iostream>
using namespace std;

//作用：将自定义的结构体放入到数组中方便维护
//语法： struct 结构体名 数组名[元素个数] = { {},{},{},{}...{} };

struct student
{
	string name;		//姓名
	int age;			//年龄
	int score;			//分数
};

int main()
{
	struct student stuArray[3] =
	{
		{"张三",18,100},
		{"李四",28,99},
		{"张三",38,66}
	};

	stuArray[2].name = "赵六";
	stuArray[2].age = 80;
	stuArray[2].score = 60;

	for (int i = 0; i < 3; i++)
	{
		cout << "姓名：" << stuArray[i].name
			<< "年龄：" << stuArray[i].age
			<< "分数：" << stuArray[i].score << endl;
	};

	system("pause");

	return 0;
}
*/


 