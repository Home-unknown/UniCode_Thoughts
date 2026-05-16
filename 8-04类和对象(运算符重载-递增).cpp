//递增运算符重载 ++   作用：实现自己的整型数据

/*
#include<iostream>
using namespace std;

//自定义整型
class MyInteger
{
	friend ostream& operator<< (ostream& cout, MyInteger integer);

public:
	MyInteger()
	{
		m_Num = 0;
	}

	//1.前置递增 ++num
	MyInteger& operator++()			//返回引用是为了一直对一个数据进行操作
	{
		++m_Num;					//当只有递增符号时 ++num 等价于 num++
		return *this;				//返回自身
	}

	//2.后置递增 num++
	//void operator++(int) int代表占位参数，可以用于区分前置和后置递增
	//返回值类型不能作为区分函数的依据

	MyInteger operator++(int)		//后置递增返回值，不返回引用
	//如果返回引用，temp是局部对象，函数运行完之后就会被释放掉，下次再使用时就会报错

	{
		//先 记录当时结果
		MyInteger temp = *this;		
		//后 递增
		m_Num++;
		//最后将记录结果做返回
		return temp;
	}
	  

private:
	int m_Num;
};

//重载左移运算符
ostream& operator<< (ostream& cout, MyInteger integer)		//MyInteger 传值，不传引用
{
	cout << integer.m_Num;
	return cout;
}

void test01()
{
	MyInteger myint1;

	cout << myint1 << endl;

	cout << ++myint1 << endl;

	cout << ++(++myint1) << endl;

	cout << myint1 << endl;
}

void test02()
{
	MyInteger myint2;

	cout << myint2 << endl;

	cout << myint2++ << endl;

	cout << myint2 << endl;

//	cout << (myint2++)++ << endl;			//后置递增无法实现链式递增效果，与底层逻辑有关，不纠结
}

//总结：
//前置递增返回引用，后置递增返回值

int main()
{
	//int a = 10, b = 10;
	//cout << ++a << endl;			//11
	//cout << a << endl;			//11

	//cout << b++ << endl;			//10
	//cout << b << endl;			//11

//	test01();

	test02();

	system("pause");

	return 0;
}
*/