//
// Created by 倔强的猴子 on 2026/4/19.
//

// 在函数中使用引用
/*
#include <iostream>
using namespace std;

void swap1(int x,int y) {
    int tmp = x;
    x = y;
    y = tmp;
}

void swap2(int& x,int& y) {
    int tmp = x;
    x = y;
    y = tmp;
}

int main() {

    int x = 10;
    int y = 20;
    swap1(x,y);
    // 无法交换
    cout << "x = " << x << ",y = " << y << endl;
    swap2(x,y);
    // 可以交换
    cout << "x = " << x << ",y = " << y << endl;
    return 0;
}
 */