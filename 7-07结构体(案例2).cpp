/*
#include<iostream>
#include<string>
using namespace std;

//设计一个英雄的结构体，包括成员姓名、年龄、性别；创建结构体数组，数组中存放5名英雄
//通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果
//信息如下：
//{"刘备",23,"男"},
//{"关羽",22,"男"},
//{"张飞",22,"男"},
//{"赵云",21,"男"},
//{"貂蝉",19,"女"},

struct hero
{
	string name;
	int age;
	string sex;
};

void bubbleSort(struct hero Array[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (Array[j].age > Array[j + 1].age)
			{
				struct hero temp = Array[j];
				Array[j] = Array[j + 1];
				Array[j + 1] = temp;
			}
		}
	}
}

void printHero(struct hero Array[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "姓名：" << Array[i].name << "\t年龄：" << Array[i].age << "\t性别：" << Array[i].sex << endl;
	}
}

int main()
{
	struct hero Array[5] =
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",22,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};

	int len = sizeof(Array) / sizeof(Array[0]);

	bubbleSort(Array, len);

	printHero(Array, len);

	system("pause");

	return 0;
}
*/