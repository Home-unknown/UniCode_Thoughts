//C++中空指针也是可以调用成员函数的，但是也要注意有没有用到this指针
//如果用到this指针，需要加以判断保证代码的健壮性

/*
#include<iostream>
using namespace std;

class Person
{
public:

	void showClassName()
	{
		cout << "this is Person Class" << endl;
	}

	int m_Age  = 100;

	void showPersonAge()
	{
		//报错原因是因为传入的指针是NULL
		if (this == NULL)
		{
			return;
		}

		cout << "age  = " << this->m_Age << endl;
	}
};

void test01()
{
	Person* p = NULL;

	p->showClassName();

	p->showPersonAge();
}

int main()
{
	test01();

	system("pause");

	return 0;
}
*/