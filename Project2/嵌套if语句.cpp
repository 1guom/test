#include<iostream>
using namespace std;

int main8(){
	int score = 0;


	cout << "���������ĸ߿�������" << endl;
	cin >> score;
	cout << "������ķ����ǣ�" << score << endl;

	if (score >= 515) {
		cout << "��ϲ����һ����" << endl;
		if (score >= 700) {
			cout << "���ܿ����廪�򱱴�" << endl;
		}
		else if (score >= 650) {
			cout << "���ܿ����й������ѧ��" << endl;
		}
	}
	else if (score >= 432) {
		cout << "��ϲ���������" << endl;

	}
	else if (score >= 300) {
		cout << "��ϲ����������" << endl;
	}
	else {
		cout << "δ���ϱ���" << endl;
	}
	system("pause");
	return 0;

}