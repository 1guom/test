#include<iostream>
using namespace std;

int main3() {

	/*��ָ�룺ָ�����ָ���ڴ��б��Ϊ0�Ŀռ�
	  ���ã���ʼ��ָ�����
	  ע�⣺��ָ��ָ����ڴ��ǲ����Է��ʵģ�0��255֮��֮����ڴ�����ϵͳռ�õģ���˲����Է���)
	  */

	int* p = NULL;



	cout << *p << endl;

	system("pause");
	return 0;

	//Ұָ�룺ָ�����ָ��Ƿ����ڴ�ռ�
	int* p = (int*)0x1100;
	cout << *p << endl;



}