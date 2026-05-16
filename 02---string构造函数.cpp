//构造函数原型：
//string();							创建一个空字符串	例如：string str
//string(const char* s);			使用字符串s初始化
//string(const string& str);		使用一个string对象初始化另一个string对象
//string(int n, char c);			使用n个字符c初始化

/*
#include<iostream>
#include<string>

void test01()
{
	//string();
	std::string s1;

	//string(const char* s);	
	const char* str = "hello world";
	std::string s2(str);
	std::cout << "s2 = " << s2 << std::endl;

	//string(const string& str);
	std::string s3(s2);
	std::cout << "s3 = " << s3 << std::endl;

	//string(int n, char c)
	std::string s4(11, 'h');
	std::cout << "s4 = " << s4 << std::endl;
}

int main()
{
	test01();

	system("pause");
	return 0;
}
*/