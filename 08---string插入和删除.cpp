//string& insert(int pos, const char* s);		插入字符串
//string& insert(int pos, const string& str);	插入字符串
//string& insert(int pos, int n, char c);		在指定位置插入n个字符c
//string& erase(int pos, int n = npos);			删除从pos开始的n个字符

/*
#include<iostream>
#include<string>

void test01()
{
	std::string str = "Hello";

	//插入
	str.insert(1, "111");		//H111ello

	std::cout << "str = " << str << std::endl;

	//删除
	str.erase(1, 3);
	std::cout << "str = " << str << std::endl;
}

int main()
{
	test01();

	return 0;
}
*/