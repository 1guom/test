#include<iostream>
using namespace std;

int main1() {

	int a = 10;

	//ָ��Ķ��壺�������� *ָ�������
    int* p;

	//��ָ��p��¼����a�ĵ�ַ
	p = &a;        //&Ϊȡַ����


	//  int *p=&a;��ھ��к͵�ʮ���д���ȼ�

	cout << &a << endl;       //a�ĵ�ַ
	cout << p << endl;       //p��Ϊa�ĵ�ַ



	//ʹ��ָ�룺ͨ�������õķ�ʽ�ҵ�ָ��ָ����ڴ档ָ�����ǰ���*��������ã���*p)���ҵ�ָ��ָ���ڴ��е����ݡ�
	*p = 1000;

	cout << a << endl;          //ͨ��ָ���ҵ��ڴ棬��ͨ��*p�޸����ڴ��е�����
	cout << *p << endl;         //��ȡ






	system("pause");
	return 0;

}