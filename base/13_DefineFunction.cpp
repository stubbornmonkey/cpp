//
// Created by 倔强的猴子 on 2026/4/17.
//
#include <iostream>
// 函数的定义
using namespace std;
// 打印99乘法表
// 注意: 函数必须放在主函数的上面
void printNineNineTable() {
    for(int i = 1;i <= 9;i++) {
        for(int j = 1;j <= i;j++) {
            cout << i << "x" << j << " = " << (i * j) << "\t";
        }
        cout << endl;
    }
}

/*
int main() {
    printNineNineTable();
    return 0;
}
 */