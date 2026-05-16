//多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码

//具体解释：如果子类中有属性开辟到堆区，那么父类指针在释放时只会调用父类自己的析构函数，
//			而无法调用到子类的析构代码，此时堆内存中的子类数据还没有被清除

//解决方式：将父类中的析构函数改为虚析构或者纯虚析构

//虚析构和纯虚析构共性:
//·可以解决父类指针释放子类对象
//·都需要有具体的函数实现

//虚析构和纯虚析构区别:
//·如果是纯虚析构，该类属于抽象类，无法实例化对象

//虚析构语法：		virtual ~类名（）{}；

//纯虚析构语法:		virtual ~类名（） = 0；		类名::~类名 () {}	

/*
#include<iostream>
#include<string>
using namespace std;

class Animal
{
public:
	Animal()
	{
		cout << "this is Animal()" << endl;
	}

	//virtual ~Animal()
	//{
	//	cout << "this is ~Animal()" << endl;
	//}

	virtual ~Animal() = 0;			//纯虚析构	需要声明，也需要实现
	//有了纯虚析构之后这个类也属于抽象类，无法实例化对象

	virtual void speak() = 0;		//纯虚函数
};

Animal:: ~Animal()					//纯虚析构,需要有具体实现，因为父类也可能有数据开辟到堆区
{
	cout << "this is virtual ~Animal()" << endl;
}

class Cat :public Animal
{
public:
	Cat(string name)
	{
		cout << "this is Cat()" << endl;
		m_Name = new string(name);
	}

	~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "this is ~Cat()" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}

	virtual void speak()			
	{
		cout << *m_Name <<"小猫在说话" << endl;
	}
	
	string *m_Name;
};

class Dog :public Animal
{
public:
	virtual void speak()
	{
		cout << "小狗在说话" << endl;
	}
};

void test01()
{
	Animal* animal = new Cat("Tom");
	animal->speak();

	//父类指针在析构时，不会调用子类中析构函数，导致子类如果有堆区属性，出现内存泄露
	delete animal;
}

int main()
{
	test01();

	system("pause");

	return 0;
}
*/