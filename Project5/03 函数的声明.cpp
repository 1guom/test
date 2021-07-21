//当函数的调用写在函数的定义的前面时，要在函数的调用前加函数的声明。当函数的调用写在函数的定义的后面时，函数的声明可写可不写。

#include <iostream>
using namespace std;

int max(int a, int b);        //函数的声明

int main4() {                    //main函数（函数的调用）
	 
	int a = 10;
	int b = 20;
	int c = max(a, b);
	cout << c << endl;


	system("pause");
	return 0;
}

int max(int a, int b) {              //函数的定义（函数的实现）
	return(a > b ? a : b);
}