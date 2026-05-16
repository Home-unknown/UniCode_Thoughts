/*
#include<iostream>
using namespace std;

//作用：引用可以作为函数的返回值存在的
//注意事项：不要返回局部变量引用(返回值)
//用法：函数调用作为左值

//1.不要返回局部变量引用(返回值)
//int& test01()
//{
//	int a = 10;			//局部变量存放在四区中的“栈区”
//	return a;
//}

//2.函数的调用可以作为左值
int& test02()
{
	static int a = 10;			//静态变量存放在四区中的“全局区”,全局区数据在程序结束后由操作系统释放
	return a;
}

int main()
{
	//int& ref = test01();

	//不同编译器有不同的效果，视具体情况而定
	//cout << "ref = " << ref << endl;		//第一次结果正确，是因为编译器做了保留
	//cout << "ref = " << ref << endl;		//第二次结果错误，是因为a的内存已经释放

	int& ref2 = test02();

	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	test02() = 1000;						//可以将test02看作a的别名
											//如果函数的返回值是引用，这个函数调用可以作为左值

	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;




	system("pause");
		
	return 0;
}
*/