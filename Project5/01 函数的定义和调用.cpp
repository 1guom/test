/*
定义：

返回值类型  函数名 （参数列表）//形参    //用void时，第九行省略

{
     函数体；

     return 表达式；

}

调用：
  函数名（参数）//实参


*/

#include <iostream>
using namespace std;

int add(int a1, int a2) {
    int sum = a1 + a2;//a1,a2叫形参
    return sum;//sum的值返还给c
}

int main1() {

    int a = 10;
    int b = 20;
    int c = add(a, b);//a,b叫实参，当调用函数的时候，实参的值回传给形参。

    cout << c << endl;

    system("pause");
    return 0;
}

