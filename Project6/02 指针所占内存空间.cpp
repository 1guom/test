#include<iostream>
using namespace std;

int main2() {

	int a = 10;

	int* p = &a;

         //1.sizeof(ָ�������    2.sizeof���������� *��    һ��Ϊ4����86��      64λΪ8����64��
	cout << sizeof(p) << endl;
	cout << sizeof(int *) << endl;
	cout << sizeof(char *) << endl;
	cout << sizeof(float *) << endl;
	cout << sizeof(double *) << endl;






	system("pause");
	return 0;
}