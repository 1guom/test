#include <iostream>
using namespace std;

void swap(int a1, int a2) {

	int temp = a1;
	a1 = a2;
	a2 = temp;

	cout << a1 <<"\t" << a2 << endl;//a1,a2������
}

	int main2() {
		int a = 10;
		int b = 20;

		swap(a, b);

		cout << a <<"\t" << b << endl;//a,bû����

		system("pause");
		return 0;
	}
	//�β�ֵ�ĸı䣬��Ӱ��ʵ�ε�ֵ