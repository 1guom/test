#include<iostream>
using namespace std;

int main3(){
	int score = 0;
	cout << "���������ĸ߿�������" << endl;
	cin >> score;
	cout << "������ķ����ǣ�" << score << endl;

	if (score >= 515) {
		cout << "��ϲ����һ����" << endl;

	}
	else if (score >= 432) {
		cout << "��ϲ���������" << endl;

	}
	else if(score>=300){
		cout << "��ϲ����������" << endl;
	}
	else {
		cout << "δ���ϱ���" << endl;
	}



	system("pause");
	return 0;
}