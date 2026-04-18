//
// Created by 倔强的猴子 on 2026/4/18.
//
// 常量指针和指针常量
/*
#include <iostream>
using namespace std;

int main() {
    int num1 = 10;
    int num2 = 10;
    // 常量指针的定义 const 数据类型* 意义: 指向常量的指针
    // 性质: 1.常量指针指向的值不可以修改 2.常量指针的地址可以修改

    const int* p1 = &num1;
    // *p = 200; 不可以修改
    p1 = &num2; // 可以修改地址

    // 指针常量的定义 数据类型* const
    // 指针常量的指针是一个常量
    // 特点: 1、指针的指向不可以修改 2、指针指向的值可以修改
    int* const p2 = &num1;

    //p2 = &num2; 不可以修改

    *p2 = 100; // 值可以修改


    return 0;
}
 */