#include<iostream>
using namespace std;

int main77() {

	int b[2][3] = { {4,5,6},{4,5,6} };

	cout << "����ռ���ڴ�ռ�Ϊ��" << sizeof(b) << endl;
	cout << "�����һ��ռ�õ��ڴ�ռ�Ϊ��" << sizeof(b[0]) << endl;
	cout << "�����һ��Ԫ��ռ�õ��ڴ�ռ�Ϊ��" << sizeof(b[0][0]) << endl;

	cout << "��������Ϊ��" << sizeof(b) / sizeof(b[0]) << endl;
	cout << "��������Ϊ��" << sizeof(b[0]) / sizeof(b[0][0]) << endl;

	cout << "������׵�ַΪ��" << b << endl;//16����
	cout << "������׵�ַΪ��" <<(int) b << endl;//10����

	cout << "�����һ���׵�ַΪ��" << b[0] << endl;
	cout << "�����һ���׵�ַΪ��" << (int)b[0] << endl;
	cout << "����ڶ����׵�ַΪ��" << b[1] << endl;
	cout << "����ڶ����׵�ַΪ��" <<(int) b[1] << endl;//3*4=12
	cout << "�����һ��Ԫ�ص��׵�ַΪ��" << (int)&b[0][0] << endl;
	cout << "�����4��Ԫ�ص��׵�ַΪ��" << (int)&b[1][0] << endl;


	system("pause");
	return 0;



}