//
// Created by 倔强的猴子 on 2026/4/19.
//
// 引用的本质
/*
#include <iostream>
using namespace std;

// 引用的本质是一个指针常量 所以不能修改其引用 type* const
int main() {
    int n = 10;

    int& m = n;

    // 使用的时候相当于 *m

    cout << "m = " << m << endl;

    return 0;
}
*/