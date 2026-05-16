//二进制方式读文件主要利用流对象调用成员函数read
//函数原型：	istream& read(const char* buffer,int length)
//参数解释：字符指针buffer指向内存中一段存储空间，length是读写的字节数

/*
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Person
{
public:
	char m_name[64];
	int m_Age = 0;
};

void test01()
{
	ifstream input_file_stream;
	input_file_stream.open("person.txt", ios::in | ios::binary);

	if (!input_file_stream.is_open())
	{
		cout << "文件打开失败！" << endl;
		return;
	}

	Person p;

	input_file_stream.read((char*)&p, sizeof(Person));

	cout << "姓名：" << p.m_name << "\t年龄：" << p.m_Age << endl;

	input_file_stream.close();
}

int main()
{
	test01();

	system("pause");

	return 0;
}
*/