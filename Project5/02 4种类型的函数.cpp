#include<iostream>
using namespace std;

//1.�޲��޷�

void test01() {

	cout << "this is test01" << endl;
}

//2.�в��޷�

void test02(int a) {

	cout << a << endl;
}

//3.�޲��з�

int test03() {

	return 100;
}

//4.�в��з�
int test04(int a, int b) {
	int c = a + b;
	return c;
}
                                   //���÷�����
int main3() {
	test01();                     //������������

	test02(10);                   //������������1������2,....����

	int num1 = test03();         //�������� ������=������������
	cout << num1 << endl;

	int num2 = test04(10, 20);   ///�������� ������=������������1������2,....����
	cout << num2 << endl;

	system("pause");
	return 0;
}