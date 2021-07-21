#include<iostream>
using namespace std;

//1.无参无反

void test01() {

	cout << "this is test01" << endl;
}

//2.有参无返

void test02(int a) {

	cout << a << endl;
}

//3.无参有返

int test03() {

	return 100;
}

//4.有参有返
int test04(int a, int b) {
	int c = a + b;
	return c;
}
                                   //调用方法：
int main3() {
	test01();                     //函数名（）；

	test02(10);                   //函数名（参数1，参数2,....）；

	int num1 = test03();         //数据类型 变量名=函数名（）；
	cout << num1 << endl;

	int num2 = test04(10, 20);   ///数据类型 变量名=函数名（参数1，参数2,....）；
	cout << num2 << endl;

	system("pause");
	return 0;
}