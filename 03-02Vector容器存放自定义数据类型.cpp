//vector存放自定义数据类型

/*
#include<iostream>
#include<vector>
#include<string>

class Person
{
public:
	Person(std::string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	std::string m_Name;
	int m_Age;
};

void test01()
{
	std::vector<Person>	v;

	Person p1("Tom", 100);
	Person p2("Jerry", 99);
	Person p3("Charlotte", 18);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);

	for (std::vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		std::cout << "姓名：" << it->m_Name << std::endl;		//(*it).m_Name
		std::cout << "年龄：" << it->m_Age << std::endl;		//(*it).m_Age
	}

}

void test02()
{
	std::vector<Person*> v;

	Person p1("Tom", 100);
	Person p2("Jerry", 99);
	Person p3("Charlotte", 18);

	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);

	for (std::vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		std::cout << "姓名：" << (*it)->m_Name << std::endl;	//(*it).m_Name
		std::cout << "年龄：" << (*it)->m_Age << std::endl;		//(*it).m_Age
	}
}

int main()
{
//	test01();

	test02();

	system("pause");
	return 0;
}
*/