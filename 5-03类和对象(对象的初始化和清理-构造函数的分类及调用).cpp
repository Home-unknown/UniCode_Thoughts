//两种分类方式：
//	按参数分为：有参数构造	和	无参数构造(默认构造)
//	按类型分为：普通构造	和	拷贝构造(复制构造)

//三种调用方式：
//	括号法
//	显示法
//	隐式转换法

/*
#include<iostream>
using namespace std;

class Person
{
public:
	Person()				//无参数构造（默认构造）
	{
		cout << "Person无参构造函数的调用" << endl;
	}

	Person(int a)			//有参数构造
	{
		age = a;
		cout << "Person有参构造函数的调用" << endl;
	}

	Person(const Person& p)		//拷贝构造（复制构造）
	{
		age = p.age;			//将传入的人身上所有属性，拷贝到我身上
		cout << "Person拷贝构造函数的调用" << endl;
	}

	~Person()
	{
		cout << "Person析构函数的调用" << endl;
	}

	int age = 0;			//不为类分配空间，所以成员顺序可以随意排列，数据成员可以放在方法成员后面
};

void test01()
{
	//1.括号法 （首选）
	Person p1;			//默认构造函数
	Person p2(10);		//有参构造函数
	Person p3(p2);		//拷贝构造函数

	//注意事项1:    
	//调用默认构造函数时候，不要加()
	//因为下面这行代码，编译器会认为是一个函数的声明,不会认为在创建对象
	//Person p1();			类似于：  void func();
	
//	cout << "p2的年龄：" << p2.age << endl;
//	cout << "p3的年龄：" << p3.age << endl;

	//2.显示法
//	Person p1;
//	Person p2 = Person(10);
//	Person p3 = Person(p2);

//	Person(10);			 //匿名对象	   特点：当前行执行结束后，系统会立即回收掉匿名对象
//	cout << "aaaaa" << endl;

	//注意事项2：
	//不要利用拷贝构造函数 初始化匿名对象
	//编译器会认为:		 Person(p3); 等价于 Person p3;		对象的声明
//	Person p1;			
//	Person p2(10);		
//	Person p3(p2);
//	Person(p3);

	//3.隐式转换法
//	Person p4 = 10;			//相当于 Person p4  = Person(10);	有参构造
//	Person p5 = p4;			//拷贝构造 
}

int main()
{
	test01();

	system("pause");

	return 0;
}
*/