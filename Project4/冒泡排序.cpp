/*1.�Ƚ����ڵ�Ԫ�أ������һ���ȵڶ����󣬾�Ҫ������
2.��ÿһ������Ԫ����ͬ���Ĺ�����ִ����Ϻ��ҵ���һ�����ֵ.
3.�ظ����ϵĲ��裬ÿ�αȽ�����һ��ֱ������Ҫ�Ƚϡ�


����������=Ԫ�ظ���-1�����ѭ����������ÿ�ֶԱ���=Ԫ�ظ���-��������-1���ڲ�ѭ��������*/



#include<iostream>
using namespace std;
using namespace std;

int main5() {

	int arr[9] = { 4,5,6,1,2,3,7,8,9 };

	cout << "����ǰ��" << endl;
	for (int i = 0; i < 9; i++) {
		cout << arr[i] << "\t";

	}
	cout << endl;

	for (int i = 0; i < 9 - 1; i++) {
		for (int j = 0; j < 9 - i - 1; j++) {

			if (arr[j]) >arr[j + 1]) {

			int temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
			}
		}



	}
	cout << "�����" << endl;
	for (int i = 0; i < 9; i++) {
		cout << arr[i] << "\t";


		system("pause");
		return 0;
	}
}



