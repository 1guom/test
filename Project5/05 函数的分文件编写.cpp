/*
作用:让代码结构更加清晰

函数分文件编写一般有3个步骤：

1.在源文件中添加新建项，里面第1,2,3行写#include<iostream>、using namespace std;、#include"函数名.h"，接着写main函数调用

2.在头文件中添加新建项，名称为 函数名.h  在里面第一行和第二行分别写：  #include<iostream> 、 using namespace std;接着写函数声明

3.在源文件中添加新建项，名称为 函数名.cpp 在里面第一行写： #include"函数名.h",接着写函数的定义

*/


#include<iostream>
using namespace std;
#include"swap.h"


//  void swap(int a, int b);  //声明

/* void swap(int a, int b) {      //定义

	int temp = a;
	a = b;
	b = temp;

	cout << a << "\t" << b << endl;
}*/

int main() {     //调用

	int a1 = 10;
	int a2 = 20;

	swap(a1, a2);

	cout << a1 << "\t" << endl;

	system("pause");
    return 0;
}