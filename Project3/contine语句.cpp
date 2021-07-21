// contine语句作用：条件成立，跳过本次循环中余下尚未执行的语句，继续执行下一次循环.条件不成立，继续往下执行.


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
			break;//j=2时，条件成立，跳出break所在循环.
		}
		cout << j;//1
	}

	cout << endl;;
	system("pause");
	return 0;

}