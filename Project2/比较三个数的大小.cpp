#include<iostream>
using namespace std;

int main9(){
	int a1 = 0;
	int a2 = 0;
	int a3 = 0;
	int max = 0;


	cout << "������a1��" << endl;
	cin >> a1;

	cout << "������a2��" << endl;
	cin >> a2;

	cout << "������a3��" << endl;
	cin >> a3;

	cout << "a1=" << a1 << endl;
	cout << "a2=" << a2 << endl;
	cout << "a3=" << a3<< endl;

	max = a1;

	if (a2 > max) {
		max = a2;
	}if (a3 > max) {
		max = a3;


	}
	cout << max << endl;

	system("pause");
	return 0;


















}