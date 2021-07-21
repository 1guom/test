#include<iostream>
using namespace std;

int main7() {
         //1.
	int a[5];
	a[0] = 2;
	a[1] = 3;
	a[2] = 8;
	a[3] = 9;

	cout << a[0];
	cout << a[1];
	cout << a[2];
	cout << a[3] << endl;
	         //2.  可以不全部初始化，默认为0
	int b[5] = { 2,3,8,9 };
	for (int i = 0; i <= 4; i++) {
		if (i < 4) {
			cout << b[i];
		}
		else {
			cout << b[i] << endl;
		}
	}
	     //3.
		int c[] = { 2,3,8,9 };
		for (int j = 0; j <= 3; j++) {
			if (j < 3) {
				cout << c[j];
			}
			else {
				cout << c[j] << endl;
			}
		}

		system("pause");
		return 0;

	
}