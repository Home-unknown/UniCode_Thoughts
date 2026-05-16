//在字符串末尾拼接字符串		append---拼接
//string& operator+=(const char* str);					重载+=操作符	
//string& operator+=(const char c);						重载+=操作符	
//string& operator+=(const string& str);				重载+=操作符	
//string& append(const char* s);						把字符串s连接到当前字符串结尾	
//string& append(const char* s, int n);					把字符串s的前n个字符连接到当前字符串结尾	
//string& append(const string& s);						同operator+=(const string& str)	
//string& append(const string& s, int pos, int n);		字符串s中从pos开始的n个字符连接到字符串结尾

/*
#include<iostream>
#include<string>

void test01()
{
	std::string str1 = "我";
	str1 += "爱玩游戏";
	std::cout << "str1 = " << str1 << std::endl;

	str1 += ':';
	std::cout << "str1 = " << str1 << std::endl;

	std::string str2 = " LOL DNF";
	str1 += str2;
	std::cout << "str1 = " << str1 << std::endl;

	std::string str3 = "I";
	str3.append(" Love");
	std::cout << "str3 = " << str3 << std::endl;

	str3.append(" game abcde", 5);
	std::cout << "str3 = " << str3 << std::endl;

	str3.append(str2);
	std::cout << "str3 = " << str3 << std::endl;

	//参数2：从哪个位置开始截取			参数3：截取字符个数
	str3.append(str2, 0, 4);
	std::cout << "str3 = " << str3 << std::endl;		//只截取 LOL

	str3.append(str2, 4, 4);
	std::cout << "str3 = " << str3 << std::endl;		//只截取 DNF
}	

int main()
{
	test01();

	system("pause");

	return 0;
}
*/