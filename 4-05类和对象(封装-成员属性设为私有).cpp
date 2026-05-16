/*
#include<iostream>
using namespace std;

//private
//优点1：将所有成员属性设置为私有，可以自己控制读写权限
//优点2：对于写权限，我们可以检测数据的有效性

//人类
#include<string>
class Person
{

public:
	void setName(string name)			//设置姓名
	{
		m_Name = name;
	}

	string getName()					//获取姓名
	{
		return m_Name;
	}
	
	int getAge()						//获取年龄
	{
		return m_Age;
	}

	void setIdol(string idol)			//设置偶像
	{
		m_Idol = idol;
	}

	void setAge(int age)				//设置年龄(0~150)
	{
		if (age < 0 || age>150)
		{
			cout << "你年龄输入有误" << endl;
			return;						//void中return表示退出函数,类似于break
		}

		m_Age = age;
	}

private:
	string m_Name;		//姓名	可读可写

	int m_Age = 18;			//年龄	只读	也可以写（年龄必须在0~150之间）

	string m_Idol;		//偶像	只写
};

int main()
{
	Person p;

	p.setName("张三");
	cout << p.getName() << endl;

	p.setAge(1000);
	cout << p.getAge() << endl;

	p.setIdol("小明");
//	cout << p.getIdol() << endl;

	system("pause");

	return 0;
}
*/