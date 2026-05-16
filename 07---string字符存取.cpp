//char& operator[](int n)		通过[]方式获取字符
//char& at(int n)				通过at方法获取字符

/*
#include<iostream>
#include<string>

void test01()
{
	std::string str = "Hello";

	//std::cout << "str = " << str << std::endl;

	//1.通过[]方式获取字符
	for (int i = 0; i < str.size(); i++)
	{
		std::cout << str[i] << " ";
	}

	std::cout << std::endl;

	//2.通过at方法获取字符			(at会检测是否超过下标，如果超过就会报错，所以检测速度慢)
	for (int i = 0; i < str.size(); i++)
	{
		std::cout << str.at(i) << " ";
	}

	std::cout << std::endl;

	//修改单个字符
	str[0] = 'x';

	std::cout << str << std::endl;

	str.at(1) = 'x';

	std::cout << str << std::endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}
*/