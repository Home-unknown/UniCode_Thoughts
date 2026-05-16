/*
#include<iostream>
#include<string>			//在旧版本需要带上
using namespace std;
int main()
{
	//考试成绩统计：
	//			语文	数学	英语
	//张三：	100		100		100
	//李四：	90		50		100
	//王五：	60		70		80
	//用二维数组输出他们成绩


	int scores[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};

	string names[3] = { "张三","李四","王五" };

	for (int a = 0; a < 3; a++)
	{
		int sum = 0;
		for (int b = 0; b < 3; b++)
		{
			sum += scores[a][b];		//x+=y 即：x=x+y
			cout << scores[a][b] << "\t";
		}
		cout << "\t" << names[a] << "的总分为：" << sum << endl;
	}


	system("pause");

	return 0;
}
*/