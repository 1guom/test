#include<iostream>
using namespace std;

int main1() {

	int a = 10;

	//指针的定义：数据类型 *指针变量名
    int* p;

	//让指针p记录变量a的地址
	p = &a;        //&为取址符号


	//  int *p=&a;与第九行和第十二行代码等价

	cout << &a << endl;       //a的地址
	cout << p << endl;       //p即为a的地址



	//使用指针：通过解引用的方式找到指针指向的内存。指针变量前面加*代表解引用（如*p)，找到指针指向内存中的数据。
	*p = 1000;

	cout << a << endl;          //通过指针找到内存，并通过*p修改了内存中的数据
	cout << *p << endl;         //读取






	system("pause");
	return 0;

}