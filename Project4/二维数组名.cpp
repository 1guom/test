#include<iostream>
using namespace std;

int main77() {

	int b[2][3] = { {4,5,6},{4,5,6} };

	cout << "数组占用内存空间为：" << sizeof(b) << endl;
	cout << "数组第一行占用的内存空间为：" << sizeof(b[0]) << endl;
	cout << "数组第一个元素占用的内存空间为：" << sizeof(b[0][0]) << endl;

	cout << "数组行数为：" << sizeof(b) / sizeof(b[0]) << endl;
	cout << "数组列数为：" << sizeof(b[0]) / sizeof(b[0][0]) << endl;

	cout << "数组的首地址为：" << b << endl;//16进制
	cout << "数组的首地址为：" <<(int) b << endl;//10进制

	cout << "数组第一行首地址为：" << b[0] << endl;
	cout << "数组第一行首地址为：" << (int)b[0] << endl;
	cout << "数组第二行首地址为：" << b[1] << endl;
	cout << "数组第二行首地址为：" <<(int) b[1] << endl;//3*4=12
	cout << "数组第一个元素的首地址为：" << (int)&b[0][0] << endl;
	cout << "数组第4个元素的首地址为：" << (int)&b[1][0] << endl;


	system("pause");
	return 0;



}