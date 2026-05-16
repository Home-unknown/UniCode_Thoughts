//问题：
//类模板中成员函数创建时机是在调用阶段，导致分文件编写时链接不到

//解决：
//1.直接包含.cpp源文件
//2.将声明和实现写道同一个文件中，并更改后缀名为.hpp	.hpp是约定俗成的名称，并不强制要求

/*
#include<iostream>
using namespace std;

int main()
{


	system("pause");

	return 0;
}
*/