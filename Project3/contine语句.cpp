// contine������ã�������������������ѭ����������δִ�е���䣬����ִ����һ��ѭ��.��������������������ִ��.


#include<iostream>
using namespace std;

int main22() {

	for (int i = 1; i <= 10; i++) {

		if (i % 2 == 0) {
			continue;
		}
		cout << i ;//1,3,5,7,9
	}

	

	for (int j = 1; j <= 10; j++) {

		if (j % 2 == 0) {
			break;//j=2ʱ����������������break����ѭ��.
		}
		cout << j;//1
	}

	cout << endl;;
	system("pause");
	return 0;

}