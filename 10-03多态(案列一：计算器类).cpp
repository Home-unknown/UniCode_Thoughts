//案例描述：分别用普通写法和多态技术，设计实现两个操作数进行运算的计算器类

//多态的优点：
//·代码组织清晰
//·可读性强
//·利于前期和后期的扩展以及维护

/*
#include<iostream>
#include<string>
using namespace std;

//class Calculator
//{
//public:
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return m_A + m_B;
//		}
//		if (oper == "-")
//		{
//			return m_A - m_B;
//		}
//		if (oper == "*")
//		{
//			return m_A * m_B;
//		}
//
//		//如果想要扩展新的功能，需要修改源码
//		//在真正开发中	提倡	开闭原则：对扩展进行开放，对修改进行关闭
//	//	if (oper == "/")
//	//	{
//	//		return m_A / m_B;
//	//	}
//	}
//
//	int m_A;
//	int m_B;
//};
//
//void test01()
//{
//	//创建一个计算器对象
//	Calculator c;
//	c.m_A = 10;
//	c.m_B = 20;
//
//	cout << c.m_A << " + " << c.m_B << " = " << c.getResult("+") << endl;
//	cout << c.m_A << " - " << c.m_B << " = " << c.getResult("-") << endl;
//	cout << c.m_A << " * " << c.m_B << " = " << c.getResult("*") << endl;
//}

class AbstractCalculator
{
public:
	virtual int getResult()
	{
		return 0;
	}

	int m_Num1 = 0;
	int m_Num2 = 0;
};

class AddCalculator :public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_Num1 + m_Num2;
	}
};

class SubCalculator :public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_Num1 - m_Num2;
	}
};

class MulCalculator :public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_Num1 * m_Num2;
	}
};

void test02()
{
	//动态多态使用：
	//父类的指针或引用	指向子类对象

	//加法
	AbstractCalculator* abc = new AddCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 20;

	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
	//堆区数据记得销毁
	delete abc;

	//减法
	abc = new SubCalculator;
	abc->m_Num1 = 100;				//不能使用加法的对象，因为指针释放后再引用会变成野指针
	abc->m_Num2 = 20;

	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;

	//乘法
	abc = new MulCalculator;
	abc->m_Num1 = 100;				
	abc->m_Num2 = 20;

	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;
}

int main()
{
//	test01();

	test02();

	system("pause");

	return 0;
}
*/