#include<iostream>
using namespace std;

int main55() {

	//1.������������ռ���ڴ�ռ��ÿ��Ԫ��ռ�õ��ڴ�ռ䣬�Ӷ����Եõ�������Ԫ�صĸ���

	int a[5] = { 1,2,3,4,5 };
	cout << sizeof(a) << endl;
	cout << sizeof(a[0]) << endl;
	cout << sizeof(a) / sizeof(a[0]) << endl;

	//2.����ͨ���������鿴�����׵�ַ

	cout << a << endl;  //�鿴���������׵�ַ(16���ƣ�
	cout << &a[0] << endl;  //�鿴a[1]�׵�ַ��16���ƣ�Ҫ��&��
	cout << &a[1] << endl;  //�鿴a[2]�׵�ַ��16���ƣ�Ҫ��&��

	system("pause");
	return 0;


}