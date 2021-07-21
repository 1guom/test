#include<iostream>
using namespace std;

int main44(){
	int a = 10;
	int b = 20;
	int c = 0;

	c = (a > b ? a : b);
	cout << c << endl;

	//在C++中，三目运算符返回的是变量，可以继续赋值

	(a > b ? a : b) = 100;//b=100
	cout << b << endl;

	(a < b ? a : b) = 100;//a=100
	cout << a << endl;








	system("pause");
	return 0;

}