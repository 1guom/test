//�������ĵ���д�ں����Ķ����ǰ��ʱ��Ҫ�ں����ĵ���ǰ�Ӻ������������������ĵ���д�ں����Ķ���ĺ���ʱ��������������д�ɲ�д��

#include <iostream>
using namespace std;

int max(int a, int b);        //����������

int main4() {                    //main�����������ĵ��ã�
	 
	int a = 10;
	int b = 20;
	int c = max(a, b);
	cout << c << endl;


	system("pause");
	return 0;
}

int max(int a, int b) {              //�����Ķ��壨������ʵ�֣�
	return(a > b ? a : b);
}