//比较方式：按照字符的ASCLL码进行对比

// = 返回 0
// < 返回 1
// > 返回 -1

//函数原型：
//int compare(const string& s) const	与字符串s比较
//int compare(const char* s) const		与字符串s比较

/*
#include<iostream>

void test01()
{
	std::string str1 = "hellp";
	std::string str2 = "hdllo";

	if (str1.compare(str2) == 0)		//从前向后依次比较，一旦比出结果，就返回
	{
		std::cout << "str1 = str2" << std::endl;
	}
	else if (str1.compare(str2) == 1)
	{
		std::cout << "str1 < str2" << std::endl;
	}
	else if (str1.compare(str2) == -1)
	{
		std::cout << "str1 > str2" << std::endl;
	}
}

int main()
{
	test01();

	system("pause");

	return 0;
}
*/