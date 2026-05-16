//写文件步骤如下：
//1.包含头文件		#include<fstream>
//2.创建流对象		ofstream ofs;
//3.打开文件		ofs.open("文件路径",打开方式);
//4.写数据			ofs << "写入的数据";
//5.关闭文件		ofs.close();

//文件打开方式:

//打开方式：						解释：
//	ios::in			(intput)			为读文件而打开文件
//	ios::out		(output)			为写文件而打开文件
//	ios::ate		(at end)			初始位置: 文件尾
//	ios::app		(append)			追加方式写文件
//	ios::trunc		(truncate)			如果文件存在，先删除在创建
//	ios::binary		(binary)			二进制方式

//[注];	
//文件打开方式可以配合使用,利用	" | " 操作符

//例如:		用二进制方式写文件：	ios::binary	| ios::out\

/*
#include<iostream>
using namespace std;

#include<fstream>		//包含头文件

void test01()
{
	ofstream output_file_stream;						//创建流对象	

	output_file_stream.open("test01.txt",ios::out);		//打开文件	//"E:\code\c\C++入门(二)---面向对象\test01.txt"

	output_file_stream << "姓名：张三" << endl;			//写数据
	output_file_stream << "年龄：18" << endl;
	output_file_stream << "性别：男" << endl;

	output_file_stream.close();							//关闭文件
}

int main()
{
	test01();

	system("pause");

	return 0;
}
*/