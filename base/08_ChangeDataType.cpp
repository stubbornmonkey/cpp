//
// Created by 倔强的猴子 on 2026/4/15.
//

#include <iostream>
/*
int main() {

    // 类型的取值范围 char < short < int ~ long (windows) < long long < float < double
    // 自动类型转换
    // 由取值范围小的数据类型转换为取值范围大的数据类型
    // 直接赋值即可
    // 没有精度损失
    short num1 = 100;
    int num2 = num1;
    std::cout << "num2 = " << num2 << std::endl;

    char c1 = 'a';
    int num3 = c1;
    std::cout << "num3 = " << num3 << std::endl;

    float num4 = num1;
    std::cout << "num4 = " << num4 << std::endl;

    // 强制类型转换
    // 由取值范围大的数据类型转换为取值范围小的数据类型
    // 会有精度损失
    // 我们一般会在转换的时候加上(要转换的数据类型)
    long long num5 = 100;
    int num6 = (int) num5;
    std::cout << "num6 = " << num6 << std::endl;

    int num7 = 200;
    char c2 = (char) num7;
    std::cout << "c2 = " << c2 + 1 << std::endl;

    // 注意事项
    // short、char之间运算结果自动转换为int
    short s1 = 100,s2 = 100;
    std::cout << sizeof(s1 + s2) << std::endl;

    // 在进行计算的过程中 数据类型会向上取
    int num8 = 100;
    long long num9 = 200;
    std::cout << sizeof(num8 + num9) << std::endl;

    // 在浮点数转小数的时候 会舍弃小数部分只保留整数部分 没有四舍五入的说法
    float f1 = 3.14f;
    int a = (int) f1;
    std::cout<< "a = " << a << std::endl;
    return 0;
}
 */