//读文件步骤如下：
//1.包含头文件		#include<fstream>
//2.创建流对象		ifstream ifs;
//3.打开文件		ifs.open("文件路径",打开方式);
//4.读数据			四种方式
//5.关闭文件		ifs.close();

/*
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void test01()
{
	ifstream input_file_stream;

	input_file_stream.open("test01.txt",ios::in);

	if (!input_file_stream.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}

	//读取方式：

	//第一种：
	//char buf[1024] = { 0 };				//写0的目的：1.初始化字符串数组	 2.终止符\0等价于0
	//while (input_file_stream >> buf)
	//{
	//	cout << buf << endl;
	//}

	//第二种：(一行一行读取)
	//char buf[1024] = { 0 };
	//while (input_file_stream.getline(buf, sizeof(buf)))		//ifs.getline(参数,最大字节数)
	//{
	//	cout << buf << endl;
	//}

	//第三种：(一行一行读取)
	string buf;
	while (getline(input_file_stream, buf))			//getline关键字在string头文件中
	{
		cout << buf << endl;
	}

	//第四种：(不推荐，一个一个字符读取，效率低)		
	//char c;			//	\0初始化字符
	//while ((input_file_stream.get()) != EOF)			//EOF:	end of file		//注意循环内的括号数量
	//{
	//	//无endl endl会立即刷新缓冲区，导致输出是立即显示的。
	//	//这可能会在终端上显示奇怪的输出，因为每个字符后面都有一个换行符
	//	cout << c;			
	//}

	input_file_stream.close();
}

int main()
{
	test01();

	system("pause");

	return 0;
}
*/