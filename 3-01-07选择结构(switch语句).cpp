/*
#include<iostream>
using namespace std;
int main()
{
	//作用：执行多条件分支语句
	//条件：只能是整型或者字符型；case里如果没有break那么会一直向下运行
	//语法：
	//switch( 表达式)
	//{
	//	case 结果1:执行语句;break；
	//	case 结果2:执行语句;break；
	//	......
	//	default:执行语句;break;
	//}

	//给电影打分：	10~9分：经典；	8~7分：非常好；	 6~5分：一般；	5分以下：烂片
	cout << "请给电影打分" << endl;
	int score = 0;
	cin >> score;
	cout << "您打得分数为：" << score << endl;

	switch (score)
	{
	case 10:
		cout << "您认为是经典电影" << endl;
		break;//退出当前分支
	case 9:
		cout << "您认为是经典电影" << endl;
		break;
	case 8:
		cout << "您认为是非常好的电影" << endl;
		break;
	case 7:
		cout << "您认为是非常好的电影" << endl;
		break;
	case 6:
		cout << "您认为是一般电影" << endl;
		break;
	case 5:
		cout << "您认为是一般电影" << endl;
		break;
	default:
		cout << "您认为是烂片" << endl;
		break;
	}

	system("pause");

	return 0;
}
*/

//if和switch的区别
//switch缺点 判断的时候只能是整型或字符型，不可以是一个区间
//switch优点 结构清晰，执行效率高