#include<iostream>
using namespace std;

int main11() {

	//1.��switch�����

/*	cout << "\t�˵�ѡ��\t" << endl;
	cout << "\t1.��ͨ�Ѷ�\t" << endl;
	cout << "\t2.�е��Ѷ�\t" << endl;
	cout << "\t3.�ߵ��Ѷ�\t" << endl;

	cout << "����������ѡ��:";

	int select = 0;
	cin >> select;

	switch (select) {
	case 1:
		cout << " ��ѡ�������ͨ�Ѷ�" << endl;
		break;
	case 2:
		cout << " ��ѡ������е��Ѷ�" << endl;
		break;
	case 3:
		cout << " ��ѡ����Ǹߵ��Ѷ�" << endl;
		break;
	default:
		cout << "������������" << endl;
	}
	*/

	//2.��ѭ�������

	/*for (int i = 0; i <= 10; i++) {
		if(i==5){
			break;  //�˳�ѭ��
	}
		cout << i << "\t";
	}
	*/

	//3.��Ƕ�������

	for (int i = 0; i <= 10; i++) {
		for (int j = 0; j <= 10; j++) {
			if (j == 5) {
				break;   //һ�����5��*���˳��ڲ�ѭ��

			}
			cout << "*";
		}
		cout << endl;
	}


	system("pause");
	return 0;
}