//从字符串中获取想要的子串

//string substr(int pos = 0, int n = npos) const;	返回由pos开始的n个字符组成的字符串

/*
#include<iostream>
#include<string>

void test01()
{
	std::string str = "abcdef";

	std::string subStr = str.substr(1, 3);

	std::cout << "subStr = " << subStr << std::endl;
}

//实用操作
void test02()
{
	std::string email = "ZhangSan@sina.com";

	//从邮件地址中 获取 用户名信息
	int postion = email.find('@');			// 8

	std::string userName = email.substr(0, postion);

	std::cout << "userName = " << userName << std::endl;
}

int main()
{
	test01();

	test02();

	return 0;
}
*/