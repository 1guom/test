#include<iostream>
using namespace std;

int main() {
	cout << "�����������ĩ���Եȼ�" << endl;

	char range = 'm';
	cin >> range;


	switch (range)
	{

	case 'A':
		cout << "80��100��" << endl;
		break;
	case 'B':
		cout << "70��80��" << endl;
		break;
	case'c':
		cout << "60��70��" << endl;
		break;
	case'D':
		cout << "40��60��" << endl;
		break;
	case'E':
	case'f':
		cout << "0��30��" << endl;
		break;
	default:
		cout << "������ĵȼ�����" << endl;
	}


	system("pause");
	return 0;
}









