#include<iostream>
using namespace std;

int main11() {

	//1.在switch语句中

/*	cout << "\t菜单选项\t" << endl;
	cout << "\t1.普通难度\t" << endl;
	cout << "\t2.中等难度\t" << endl;
	cout << "\t3.高等难度\t" << endl;

	cout << "请输入您的选择:";

	int select = 0;
	cin >> select;

	switch (select) {
	case 1:
		cout << " 您选择的是普通难度" << endl;
		break;
	case 2:
		cout << " 您选择的是中等难度" << endl;
		break;
	case 3:
		cout << " 您选择的是高等难度" << endl;
		break;
	default:
		cout << "您的输入有误！" << endl;
	}
	*/

	//2.在循环语句中

	/*for (int i = 0; i <= 10; i++) {
		if(i==5){
			break;  //退出循环
	}
		cout << i << "\t";
	}
	*/

	//3.在嵌套语句中

	for (int i = 0; i <= 10; i++) {
		for (int j = 0; j <= 10; j++) {
			if (j == 5) {
				break;   //一行输出5个*后退出内层循环

			}
			cout << "*";
		}
		cout << endl;
	}


	system("pause");
	return 0;
}