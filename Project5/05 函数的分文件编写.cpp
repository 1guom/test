/*
����:�ô���ṹ��������

�������ļ���дһ����3�����裺

1.��Դ�ļ�������½�������1,2,3��д#include<iostream>��using namespace std;��#include"������.h"������дmain��������

2.��ͷ�ļ�������½������Ϊ ������.h  �������һ�к͵ڶ��зֱ�д��  #include<iostream> �� using namespace std;����д��������

3.��Դ�ļ�������½������Ϊ ������.cpp �������һ��д�� #include"������.h",����д�����Ķ���

*/


#include<iostream>
using namespace std;
#include"swap.h"


//  void swap(int a, int b);  //����

/* void swap(int a, int b) {      //����

	int temp = a;
	a = b;
	b = temp;

	cout << a << "\t" << b << endl;
}*/

int main() {     //����

	int a1 = 10;
	int a2 = 20;

	swap(a1, a2);

	cout << a1 << "\t" << endl;

	system("pause");
    return 0;
}