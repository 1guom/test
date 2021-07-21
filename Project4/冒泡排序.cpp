/*1.比较相邻的元素，如果第一个比第二个大，就要交换。
2.对每一对相邻元素做同样的工作，执行完毕后，找到第一个最大值.
3.重复以上的步骤，每次比较数减一，直到不需要比较。


排序总轮数=元素个数-1（外层循环次数）；每轮对比数=元素个数-排序轮数-1（内层循环次数）*/



#include<iostream>
using namespace std;
using namespace std;

int main5() {

	int arr[9] = { 4,5,6,1,2,3,7,8,9 };

	cout << "排序前：" << endl;
	for (int i = 0; i < 9; i++) {
		cout << arr[i] << "\t";

	}
	cout << endl;

	for (int i = 0; i < 9 - 1; i++) {
		for (int j = 0; j < 9 - i - 1; j++) {

			if (arr[j]) >arr[j + 1]) {

			int temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
			}
		}



	}
	cout << "排序后：" << endl;
	for (int i = 0; i < 9; i++) {
		cout << arr[i] << "\t";


		system("pause");
		return 0;
	}
}



