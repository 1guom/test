#include<iostream>
using namespace std;

int main2(){
	int score = 0;
	cout << "请输入您的分数:" << endl;
	cin >> score;
	cout << "您输入的分数是：" << score << endl;

	if (score >= 515) {
		cout << "您考入一本" << endl;
	}
	else {
		cout << "您未考上一本大学" << endl;


	}

	system("pause");
	return 0;
}