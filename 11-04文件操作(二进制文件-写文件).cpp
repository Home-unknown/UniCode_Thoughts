//以二进制的方式对文进行读取操作，打开方式要指定为ios::binary

//二进制方式写文件主要利用流对象调用成员函数write
//函数原型：	ostream& write(const char* buffer,int length)
//参数解释：字符指针buffer指向内存中一段存储空间，length是读写的字节数

/*
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Person
{
public:

	//不要使用C++中的string，string本质是一个类，可能会把类写进去
	char m_Name[64];	//姓名		

	int m_Age;			//年龄
};

void test01()
{
	//利用构造函数实现open的效果
	ofstream out_file_stream("person.txt",ios::out|ios::binary);

	Person p = { "张三",18 };

	out_file_stream.write((const char*)&p, sizeof(Person));

	out_file_stream.close();
}

int main()
{
	test01();

	system("pause");

	return 0;
}
*/