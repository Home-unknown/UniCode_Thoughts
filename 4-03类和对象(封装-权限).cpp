/*
#include<iostream>
using namespace std;

//封装意义二：		类在设计时，可以把属性和行为放在不同的权限下，加以控制

//访问权限有三种：
//1.public		公共权限	成员 类内可以访问，类外可以访问		(公交车)   
//2.protected   保护权限	成员 类内可以访问，类外不可以访问	(通勤车)	 (儿子可以访问父亲中的保护内容)
//3.private		私有权限	成员 类内可以访问，类外不可以访问	(私家车)	 (儿子不可以访问父亲中的保护内容)

class person
{
public:				//公共权限
	string m_name;

protected:			//保护权限
	string m_car;

private:			//私有权限
	int m_password;

public:
	void func()
	{
		m_name = "张三";
		m_car = "拖拉机";
		m_password = 123456;
	}
};

int main()
{
	person p1;			//实例化具体对象

	p1.m_name = "李四";
//	p1.m_car = "奔驰";			//保护权限的内容在类外访问不到
//	p1.m_password = 123;		//保护权限的内容在类外访问不到

	p1.func();

	system("pause");

	return 0;
}
*/