//
// Created by 倔强的猴子 on 2026/4/15.
//
#include <iostream>
/*
 * 宏定义的使用
 *  就是用一个标识符代替字符串 在代码中字符串会有意义 但定义宏时不景行运算
 * */
// 注意宏定义后面不用加分号
#define SUCCESS_CODE 0
#define EXPR 2 + 2
#define EXPR2 (2 + 2)
/*
int main() {
    // std::cout << 0 << std::endl;
    std::cout << SUCCESS_CODE << std::endl;

    //std::cout << 2 + 2 << std::endl;
    std::cout << EXPR << std::endl;

    // std::cout << 2 + 2 * 2 + 2  << std::endl;
    // 输出8
    std::cout << EXPR * EXPR << std::endl;

    // std::cout << (2 + 2) * (2 + 2)  << std::endl;
    std::cout << EXPR2 * EXPR2 << std::endl;

    return 0;
}
 */