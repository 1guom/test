#include<iostream>
using namespace std;

int main2() {

	int a = 10;

	int* p = &a;

         //1.sizeof(指针变量）    2.sizeof（数据类型 *）    一般为4（×86）      64位为8（×64）
	cout << sizeof(p) << endl;
	cout << sizeof(int *) << endl;
	cout << sizeof(char *) << endl;
	cout << sizeof(float *) << endl;
	cout << sizeof(double *) << endl;






	system("pause");
	return 0;
}