#include<iostream>
using namespace std;

int main3() {

	/*空指针：指针变量指向内存中编号为0的空间
	  作用：初始化指针变量
	  注意：空指针指向的内存是不可以访问的（0～255之间之间的内存编号是系统占用的，因此不可以访问)
	  */

	int* p = NULL;



	cout << *p << endl;

	system("pause");
	return 0;

	//野指针：指针变量指向非法的内存空间
	int* p = (int*)0x1100;
	cout << *p << endl;



}