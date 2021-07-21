#include<iostream>
using namespace std;

int main() {
	cout << "请输入你的期末考试等级" << endl;

	char range = 'm';
	cin >> range;


	switch (range)
	{

	case 'A':
		cout << "80～100分" << endl;
		break;
	case 'B':
		cout << "70～80分" << endl;
		break;
	case'c':
		cout << "60～70分" << endl;
		break;
	case'D':
		cout << "40～60分" << endl;
		break;
	case'E':
	case'f':
		cout << "0～30分" << endl;
		break;
	default:
		cout << "您输入的等级有误！" << endl;
	}


	system("pause");
	return 0;
}









