//
// Created by 倔强的猴子 on 2026/5/3.
//
/*
#include <iostream>
using namespace std;
//#include "NumberCalculator.cpp"
#include "NumberCalculator.hpp"

int main() {

    // 报错 因为模板类中的函数在调用的时候才会创建，所以调用不到cpp中的构造函数的实现
    NumberCalculator<int,int> cal;

    // 解决这个问题
    // 1、引入cpp文件
    // 2、将类的声明和实现放入一个文件中 我们习惯将这个文件的名字写为.hpp
    return 0;
}
 */