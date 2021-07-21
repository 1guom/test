#include<iostream>
using namespace std;

int main3() {

	int a[5] = { 100.200,300,400,500 };

	int max = 0;

	for (int i = 0; i <= 4; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	cout <<  max << endl;

	system("pause");
	return 0;
}