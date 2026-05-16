/* 
#include<iostream>
using namespace std;
int main()
{
	//查看二维数组所占内存空间
	//获取二维数组首地址

	int arr[3][3] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9},
	};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << "\n" <<sizeof(arr) << endl;			//查看二维数组所占内存：4 * 9 = 36
	cout << sizeof(arr[0]) << endl;			//查看二维数组第一行所占内存：4 * 3 = 12
	cout << sizeof(arr[0][0]) << endl;		//查看二维数组第一个元素所占内存：4

	cout << "\n二维数组行数为：" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "二维数组列数为：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	cout << "\n(16)二维数组的首地址为：" << arr << endl;
	cout << "(10)二维数组的首地址为：" << (int)arr << endl;

	cout << "\n二维数组第一行首地址为：" << (int)arr[0] << endl;
	cout << "二维数组第二行首地址为：" << (int)arr[1] << endl;

	cout << "\n二维数组第一个元素首地址为：" << (int)&arr[0][0] << endl;	//取址符：&

	system("pause");

	return 0;
}
*/
