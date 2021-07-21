#include<iostream>
using namespace std;

int main55() {

	//1.计算整个数组占用内存空间和每个元素占用的内存空间，从而可以得到数组中元素的个数

	int a[5] = { 1,2,3,4,5 };
	cout << sizeof(a) << endl;
	cout << sizeof(a[0]) << endl;
	cout << sizeof(a) / sizeof(a[0]) << endl;

	//2.可以通过数组名查看数组首地址

	cout << a << endl;  //查看整个数组首地址(16进制）
	cout << &a[0] << endl;  //查看a[1]首地址（16进制，要加&）
	cout << &a[1] << endl;  //查看a[2]首地址（16进制，要加&）

	system("pause");
	return 0;


}