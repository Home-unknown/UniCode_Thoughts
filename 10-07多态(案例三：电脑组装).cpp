//案例描述：
//电脑主要组成部件为：CPU(用于计算），显卡（用于显示），内存条（用于存储)
//将每个零件封装出抽象基类，并且提供不同的厂商生产不同的零件，例如Intel厂商和Lenovo厂商
//创建电脑类提供让电脑工作的函数，并且调用每个零件工作的接口
//测试时组装三台不同的电脑进行工作

/*
#include<iostream>
using namespace std;

//抽象出不同的零件
class CPU
{
public:
	virtual void Calculate() = 0;		//抽象的计算函数
};

class VideoCard
{
public:
	virtual void Display() = 0;			//抽象的显示函数
};

class MemoryBank
{
public:
	virtual void Storage() = 0;			//抽象的存储函数
};

//电脑类
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* gpu, MemoryBank* ram)				//零件的构造函数
	{
		m_cpu = cpu;
		m_gpu = gpu;
		m_ram = ram;
	}

	void work()				//提供工作的函数,让零件工作起来，调用接口
	{
		m_cpu->Calculate();
		m_gpu->Display();
		m_ram->Storage();
	}

	//提供析构函数释放电脑零件
	~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}

		if (m_gpu != NULL)
		{
			delete m_gpu;
			m_gpu = NULL;
		}

		if (m_ram != NULL)
		{
			delete m_ram;
			m_ram = NULL;
		}
	}

private:
	CPU* m_cpu;				//CPU零件指针
	VideoCard* m_gpu;		//显卡零件指针
	MemoryBank* m_ram;		//内存条零件指针
};

//具体厂商
//Inter
class IntelCPU :public CPU
{
public:
	virtual void Calculate()
	{
		cout << "this is IntelCPU's doing!" << endl;
	}
};

class IntelVideoCard :public VideoCard
{
public:
	virtual void Display()
	{
		cout << "this is IntelVideoCard's doing!" << endl;
	}
};

class IntelMemoryBank :public MemoryBank
{
public:
	virtual void Storage()
	{
		cout << "this is IntelMemoryBank's doing!" << endl;
	}
};

//Lenovo
class LenovoCPU :public CPU
{
public:
	virtual void Calculate()
	{
		cout << "this is LenovoCPU's doing!" << endl;
	}
};

class LenovoVideoCard :public VideoCard
{
public:
	virtual void Display()
	{
		cout << "this is LenovoVideoCard's doing!" << endl;
	}
};

class LenovoMemoryBank :public MemoryBank
{
public:
	virtual void Storage()
	{
		cout << "this is LenovoMemoryBank's doing!" << endl;
	}
};

//组装电脑
void test01()
{
	//第一台电脑零件
	CPU* intel_Cpu = new IntelCPU;
	VideoCard* intel_Card = new IntelVideoCard;
	MemoryBank* intel_Ram = new IntelMemoryBank;
	
	//创建第一台电脑
	Computer* computer1 = new Computer(intel_Cpu, intel_Card, intel_Ram);
	computer1->work();
	delete computer1;

	cout << "\n----------------------------------\n" << endl;

	//第二台电脑组装
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemoryBank);
	computer2->work();
	delete computer2;

	cout << "\n----------------------------------\n" << endl;

	//第三台电脑组装
	Computer* computer3 = new Computer(new IntelCPU, new IntelVideoCard, new LenovoMemoryBank);
	delete computer3;
}

int main()
{
	test01();

	system("pause");

	return 0;
}
*/