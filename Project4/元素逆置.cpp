#include<iostream>
using namespace std;

int main(){

int a[5] = { 1,2,3,4,5 };
cout << "数组逆置前为：" << endl;

for (int i = 0; i <= 4; i++) {
	cout << a[i] << endl;

}

int start = 0;  //第一个元素下标
int end = sizeof(a) / sizeof(a[0]) - 1;  //最后一个元素下标=元素个数-1

while (start < end) {
	int b = a[start];
	a[start] = a[end];
	a[end] = b;

	start = start -1;
	end = end - 1;
}

cout << "数组逆置后为:" << endl;

for (int  j= 0; j <= 4; j++) {
	cout << a[j] << endl;
}

system("pause");
return 0;
}