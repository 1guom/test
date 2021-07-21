#include<iostream>
using namespace std;

int main9() {

	int a[2][3];

	a[0][0] = 1;
	a[0][1] = 2;
	a[0][2] = 3;
	a[1][0] = 1;
	a[1][1] = 2;
	a[1][2] = 3;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << a[i][j] << "\t";
		}
		cout << endl;

	}
	cout << "---------------------" << endl;

	int b[2][3] = { {4,5,6},{4,5,6} };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << b[i][j] << "\t";
		}
		cout << endl;

	}

	cout << "---------------------" << endl;

	int c[2][3] = { 7,4,1,8,5,2 };//系统自动识别
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << c[i][j] << "\t";
		}
		cout << endl;

	}
	cout << "---------------------" << endl;

	int d[][3] = { 9,6,3,8,5,2 };//可以省略行数，但不能省略列数，系统自动识别
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << d[i][j] << "\t";
		}
		cout << endl;

	}




	system("pause");
	return 0;


}


