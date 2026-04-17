//
// Created by 倔强的猴子 on 2026/4/17.
//
// 函数调用的顺序
#include <iostream>
using namespace std;
void print2() {
    cout << 2 << endl;
}

void print3() {
    print2();
    cout << 3 << endl;
}

void print1() {
    cout << 1 << endl;
    print3();
}
/*
int main() {

    cout << "start....." << endl;

    print1();

    cout << "end..." << endl;

    return 0;
}
*/