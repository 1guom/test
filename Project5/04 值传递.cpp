#include <iostream>
using namespace std;

void swap(int a1, int a2) {

	int temp = a1;
	a1 = a2;
	a2 = temp;

	cout << a1 <<"\t" << a2 << endl;//a1,a2交换了
}

	int main2() {
		int a = 10;
		int b = 20;

		swap(a, b);

		cout << a <<"\t" << b << endl;//a,b没交换

		system("pause");
		return 0;
	}
	//形参值的改变，不影响实参的值