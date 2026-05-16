/*
C++程序在执行时，将内存大方向划分为4个区域：
	-代码区：存放函数体的二进制码，由操作系统进行管理
	-全局区：存放全局变量和静态变量以及常量
	-栈区：由编译器自动分配释放，存放函数值的参数值，局部变量等
	-堆区：由程序员分配和释放，若程序员不释放，程序结束时由操作系统回收

意义：不同区域释放的数据，赋予不同的生命周期，给我们更大的灵活编程

///程序运行前
在程序编译后，生成了exe可执行程序，未执行该程序前分为两个区域

代码区：
	存放CPU执行的机器指令
	代码区是“共享”的，共享的目的是对于频繁被执行的程序，只需要在内存中有一份代码即可
	代码区是“只读”的，使其只读的原因是防止程序意外地修改了它的命令

全局区：
	全局变量和静态变量存放在此
	全局区还包含了常量区，字符串常量和其他常量也存放在此
	该区域的数据在程序结束后由操作系统释放

*/

// c - const		g - global			l - local

/*
#include<iostream>
using namespace std;

int g_a = 10;			//全局变量，不在函数体中的变量
int g_b = 10;

int c_g_a = 10;			//const修饰全局变量
int c_g_b = 10;

int main()
{
	int a = 10;			//创建局部变量
	int b = 10;

	cout << "局部变量a的地址：" << (int)&a << endl;
	cout << "局部变量b的地址：" << (int)&b << endl;

	cout << "全局变量g_a的地址：" << (int)&g_a << endl;
	cout << "全局变量g_b的地址：" << (int)&g_b << endl;

	static int s_a = 10;		//静态变量    在普通变量前面加static，属于静态变量
	static int s_b = 10;

	cout << "静态变量s_a的地址：" << (int)&s_a << endl;
	cout << "静态变量s_b的地址：" << (int)&s_b << endl;

	//常量：        
	cout << "字符串常量的地址为：" << (int)&"Hello World"  << endl;		//字符串常量
	cout << "字符串常量的地址为：" << (int)&"Hello Family" << endl;

	//const修饰常量		
	// 
	//const修饰全局变量 (main函数上方)    
	cout << "全局常量c_g_a的地址：" << (int)&c_g_a << endl;
	cout << "全局常量c_g_b的地址：" << (int)&c_g_b << endl;

	//const修饰局部变量
	int c_l_a = 10;
	int c_l_b = 10;

	cout << "局部常量c_l_a的地址：" << (int)&c_l_a << endl;
	cout << "局部常量c_l_b的地址：" << (int)&c_l_b << endl;

	//总结
	//不在全局区中：  局部变量		const修饰的局部变量（局部常量）
	//在全局区中：	  全局变量		静态变量（static关键字）			常量 [ 字符串常量、const修饰的全局变量（全局常量）]


	system("pause");

	return 0;
}
*/