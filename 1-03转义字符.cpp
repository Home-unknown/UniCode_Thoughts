/*
//转义字符用于表示一些不能显示出来的ASCII字符
#include<iostream>		
using namespace std;

int main()
{ 
	cout << "hello world\n";		//换行符	"\n" 
	cout << "hello world";				

	cout << "\n\\"<<endl;		//反斜杠"\",第一个反斜杠告诉编译器将要输出特殊字符

	cout << "a \t helloworld" << endl;		//水平制表符"\t",整齐的输出数据
	cout << "aa \t helloworld" << endl;
	cout << "aaa \t helloworld" << endl;

system("pause");

return 0;
}
*/