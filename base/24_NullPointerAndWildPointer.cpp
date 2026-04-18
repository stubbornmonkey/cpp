//
// Created by 倔强的猴子 on 2026/4/18.
//
// 空指针和野指针
/*
#include <iostream>
using namespace std;

int main() {
    // 空指针 没有存放地址的指针
    int* p = NULL;
    cout << p << endl;
    // 访问不到内存地址
    // cout << *p << endl;

    // 野指针 有内存地址 但是内存地址所指的空间不存在
    int* a = (int*) 0x11132;

    cout << a << endl;
    // 访问不到空间
    //cout << *a << endl;

    return 0;
}
 */