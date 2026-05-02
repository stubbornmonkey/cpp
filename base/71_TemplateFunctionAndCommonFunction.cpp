//
// Created by 倔强的猴子 on 2026/5/2.
//
// 普通函数和模板函数
// 1、调用模板函数的时候 参数不会进行类型转换
// 2、函数模板和普通函数相同时(函数名和参数相同)优先调用普通函数
/*
#include <iostream>
using namespace std;

template<typename T>
int add(T a,T b) {
    cout << "调用模板函数" << endl;
    return a + b;
}
template<typename T>
int add2(T a,T b) {
    cout << "调用模板函数" << endl;
    return a + b;
}

int add(int a,int b) {
    cout << "调用普通函数" << endl;
    return a + b;
}

int main() {

    int a = 10;
    char c = 'a';

    add(a,c);

    //add2(a,c); // 报错

    return 0;
}
*/