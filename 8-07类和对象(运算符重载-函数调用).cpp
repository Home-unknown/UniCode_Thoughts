//函数调用运算符 ()  也可以重载
//由于重载后使用方式非常像函数的调用，因此称为：仿函数
//仿函数没有固定的写法，非常灵活

/*
#include<iostream>
#include<string>
using namespace std;

class MyPrint
{
public:
	//重载函数调用运算符
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void MyPrint02(string test)
{
	cout << test << endl;
}

void test01()
{
	MyPrint Myprint01;

	Myprint01("Hello World");			//像函数的调用，因此称为：仿函数

	MyPrint02("Hello World");
}

//仿函数很灵活

//加法类
class MyAdd
{
public:
	int operator()(int num1,int num2)
	{
		return num1 + num2;
	}
};

void test02()
{
	MyAdd myadd;
	int result = myadd(100, 100);

	cout << "ret = " << result << endl;

	//匿名函数对象  MyAdd()     当前行运行完之后立即释放
	cout << MyAdd()(100, 100) << endl;
}

int main()
{
//	test01();

	test02();

	system("pause");

	return 0;
}
*/