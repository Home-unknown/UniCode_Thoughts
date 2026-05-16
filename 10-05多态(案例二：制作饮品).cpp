//案例描述：制作饮品大致流程：煮水 -> 冲泡 -> 倒入杯中 -> 加入辅料

//利用多态技术实现本案例，提供抽象制作饮品基类，提供子类制作咖啡和茶叶

/*
#include<iostream>
using namespace std;

class AbstractDrinking
{
public:
	virtual void Boil() = 0;

	virtual void Brew() = 0;

	virtual void PourInCup() = 0;

	virtual void PutSomething() = 0;

	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

class Coffee:public AbstractDrinking
{
public:
	virtual void Boil()			{ cout << "煮水中贵族" << endl; };
	virtual void Brew()			{ cout << "冲咖啡" << endl; };
	virtual void PourInCup()	{ cout << "倒入玻璃杯中" << endl; };
	virtual void PutSomething() { cout << "加入牛奶、方糖" << endl; };
};

class tea :public AbstractDrinking
{
public:
	virtual void Boil()			{ cout << "煮农夫山泉" << endl; };
	virtual void Brew()			{ cout << "冲茶叶" << endl; };
	virtual void PourInCup()	{ cout << "倒入高脚杯杯中" << endl; };
	virtual void PutSomething() { cout << "加入枸杞、红枣" << endl; };
};

void doWork(AbstractDrinking *abs)		//AbstractDrinking *abs = new Caffee
{
	abs->makeDrink();
	delete abs;			//堆区数据要释放
}

void test01()
{
	doWork(new Coffee);			//制作咖啡

	cout << "\n------------------\n";

	doWork(new tea);			//制作茶叶
}

int main()
{
	test01();

	system("pause");

	return 0;
}
*/