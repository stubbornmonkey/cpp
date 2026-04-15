//
// Created by 倔强的猴子 on 2026/4/15.
//
#include <iostream>
#include <iomanip>

/*
 * 各种数据类型的定义
 * */
//int main() {
//    // 32767没越界 32768越界了 最大也就是2^15 - 1 整数
//    short num1 = 32768;
//    int num2 = 10;
//    long num3 = 10;
//    long long num4 = 10;
//    std::cout << "num1 = " << num1 << ",num2 = " << num2 << ",num3 = " << num3 << ",num4 = " << num4 << std::endl;
//
//    // 浮点数
//    /*
//     * 注意: 浮点数的字面量默认是double类型 要想高效定义float 应该在字面量后面加一个f
//     * */
//    float f1 = 3.123456789012345f;
//    double f2 = 3.123456789012345;
//    // std::setprecision(20) 设置浮点数的位数
//    // float 7位之后就不准确了
//    // double 在15位之后就不准确了
//    std::cout << std::setprecision(20) << "f1 = " << f1 << std::endl;
//    std::cout << "f2 = " << f2 << std::endl;
//
//
//    // 布尔类型
//    bool b1 = 2;
//    bool b2 = 0;
//    // 在c++中 0为false 非0为true
//    std::cout << "b1 = " << b1 << std::endl;
//    std::cout << "b2 = " << b2 << std::endl;
//
//
//
//    return 0;
//}