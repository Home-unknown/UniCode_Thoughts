//STL中最常用的容器是Vector,可以理解为数组

//vector存放内置数据类型
//容器：  vector
//算法：  for_each
//迭代器：vector<int>::iterator

/*
#include<iostream>
#include<vector>			//头文件包含
#include<algorithm>			//STL标准算法头文件

void MyPrint(int val)
{
	std::cout << val << std::endl;
}

void test01()
{
	std::vector<int> v;

	v.push_back(10);			//尾插法
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//第一种遍历方式
	//std::vector<int>::iterator itBegin = v.begin();		//v.begin() 起始迭代器  指向容器中第一个元素
	//std::vector<int>::iterator itEnd = v.end();			//v.End()	结束迭代器	指向容器中最后一个元素的下一个位置

	//while (itBegin != itEnd)
	//{
	//	std::cout << *itBegin << std::endl;
	//	itBegin++;
	//}

	//第二种遍历方式
	//for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	std::cout << *it << std::endl;
	//}

	//第三中遍历方式	利用STL提供的遍历算法
	for_each(v.begin(), v.end(),MyPrint);
}

int main()
{
	test01();

	system("pause");
	return 0;
}
*/