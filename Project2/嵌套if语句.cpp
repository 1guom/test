#include<iostream>
using namespace std;

int main8(){
	int score = 0;


	cout << "请输入您的高考分数：" << endl;
	cin >> score;
	cout << "您输入的分数是：" << score << endl;

	if (score >= 515) {
		cout << "恭喜考入一本！" << endl;
		if (score >= 700) {
			cout << "您能考入清华或北大！" << endl;
		}
		else if (score >= 650) {
			cout << "您能考入中国人民大学！" << endl;
		}
	}
	else if (score >= 432) {
		cout << "恭喜考入二本！" << endl;

	}
	else if (score >= 300) {
		cout << "恭喜考入三本。" << endl;
	}
	else {
		cout << "未考上本科" << endl;
	}
	system("pause");
	return 0;

}