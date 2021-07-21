#include<iostream>
using namespace std;

int main888() {
    
    int sum = 0;

    string names[3] = { "张三","李四","王五" };

    int scores[3][3] = { {100,100,89},{68,87,93},{85,76,83} };

    for (int i = 0; i < 3; i++) {

        int sum = 0;//第一个人的sum求过后，第二个人的清零。
        for (int j = 0; j < 3; j++) {
            sum = sum + scores[i][j];
        }
        cout << names[i] << "的总分为：" << sum << endl;
    }

    system("pause");
    return 0;
}