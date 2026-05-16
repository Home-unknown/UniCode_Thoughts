//二维数组	二级指针

/*
#include<iostream>
#include<vector>

void test01()
{
	std::vector< std::vector<int> > v;

	std::vector<int> v1;			//创建小容器
	std::vector<int> v2;
	std::vector<int> v3;

	for (int i = 0; i < 4; i++)		//向小容器中添加数据
	{
		v1.push_back(i + 1);
		v2.push_back(i + 10);
		v3.push_back(i + 100);
	}

	v.push_back(v1);				//将小容器插入到大容器中
	v.push_back(v2);
	v.push_back(v3);

	//通过大容器，把所有数据遍历一遍
	for (std::vector< std::vector<int> >::iterator it = v.begin(); it != v.end(); it++)		
	{
		for (std::vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
		{
			std::cout << *vit << " ";
		}
		std::cout << std::endl;
	}
}

int main()
{
	test01();

	system("pause");
	return 0;
}
*/