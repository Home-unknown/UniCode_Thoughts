//从父类继承过来的成员，哪些属于子类对象中？

/*
#include<iostream>
using namespace std;

class Base 
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son :public Base
{
public:
	int m_D;
};

//利用开发人员命令提示工具(Developer Command Prompt for VS Insiders)查看对象模型
//跳转盘符 C: D:
//跳转文件路径 >cd 具体路径下
//cl /d1 reportSingleClassLayout类名 文件名

void test01()
{
	//父类中所有的非静态成员属性都会被子类继承下去
	//父类中私有成员属性 是被编译器给隐藏了 因此访问不到 但确实被继承下去了
	cout << "Bytes = " << sizeof(Son) << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}
*/