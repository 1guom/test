/*
���壺

����ֵ����  ������ �������б�//�β�    //��voidʱ���ھ���ʡ��

{
     �����壻

     return ���ʽ��

}

���ã�
  ��������������//ʵ��


*/

#include <iostream>
using namespace std;

int add(int a1, int a2) {
    int sum = a1 + a2;//a1,a2���β�
    return sum;//sum��ֵ������c
}

int main1() {

    int a = 10;
    int b = 20;
    int c = add(a, b);//a,b��ʵ�Σ������ú�����ʱ��ʵ�ε�ֵ�ش����βΡ�

    cout << c << endl;

    system("pause");
    return 0;
}

