//查找：查找指定字符串是否存在
//替换：在指定位置替换字符串		postion --- 位置
//int find(const string& str, int pos = 0) const;			查找str第一次出现位置，从pos开始查找	
//int find(const char* s, int pos - 0) const;				查找s第一次出现位置，从pos开始查找	
//int find(const char* s, int pos, int n) const;			从pos位置查找s的前n个字符第一次位置	
//int find(const char c, int pos - ) const;					查找字符c第一次出现位置	
//int rfind(const string& str, int pos = npos) const;		查找str最后一次位置，从pos开始查找	
//int rfind(const char* s, int pos = npos) const;			查找s最后一次出现位置，从pos开始查找	
//int rfind(const char* s, int pos, int n) const;			从pos查找s的前n个字符最后一次位置	
//int rfind(const char c, int pos - 0) const;				查找字符c最后一次出现位置	
//string& replace(int pos, int n, const string& str);		替换从pos开始n个字符为字符串str	
//string& replace(int pos, int n, const char* s);			替换从pos开始的n个字符为字符串s

/*
#include<iostream>

void test01()
{
	std::string str1 = "abcdefgde";

	int postion = str1.find("de");

	if (postion == -1)									//无则返回-1
	{
		std::cout << "未找到字符串" << std::endl;
	}
	else
	{
		std::cout << "pos = " << postion << std::endl;	// postion = 3  从0下标开始寻找
	}

	//find 从左往右寻找			rfind 从右往左寻找   ( reverse find 从后往前找 )

	int pos = str1.rfind("de");
	std::cout << "pos = " << pos << std::endl;			// pos = 7
}

void test02()
{
	std::string str1 = "abcdefg";

	str1.replace(1, 3, "1111");				//指定3个字符(bcd)，但是替换4个1(1111)

	std::cout << "str1 = " << str1 << std::endl;
}
	
int main()
{
	test01();

	test02();

	system("pause");

	return 0;
}
*/