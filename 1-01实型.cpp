/*
//单精度  float		双精度  double
//默认情况下 输出一个小数，会显示6位有效数字
#include<iostream>
using namespace std;

int main()
{
	float f1 = 3.14f;				//数字后加f，让系统认为其是单精度(不加默认双精度);
	cout << "f1=" << f1 <<endl;

	double  d1= 3.14;
	cout << "\nd2=" << d1<<endl;
	
	cout << "\nfloat的占用为："  << sizeof(float)  << endl;

	cout << "\ndouble的占用为：" << sizeof(double) << endl;

	//科学计数法

	float f2 = 3e2;		//3*10^2;
	cout << "\nf2=" << f2 << endl;

	float f3 = 3e-2;	//3*0.1^2;
	cout << "\nf3=" << f3 << endl;

	system("pause");

	return 0;
}
*/