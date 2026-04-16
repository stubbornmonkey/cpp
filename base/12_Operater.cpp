//
// Created by 倔强的猴子 on 2026/4/16.
//
#include <iostream>
using namespace std;

int main() {
    // 算数运算符
    // 基本的算数运算符
    cout << "10 + 3 = " << 10 + 3 << endl;
    cout << "10 - 3 = " << 10 - 3 << endl;
    cout << "10 * 3 = " << 10 * 3 << endl;
    cout << "10 / 3 = " << 10 / 3 << endl;
    cout << "10 % 3 = " << 10 % 3 << endl;


    // 自增自减运算符
    int num1 = 10;
    cout << "num1 = " << --num1 << endl;
    cout << "num1 = " << num1-- << endl;
    cout << "num1 = " << num1 << endl;

    // 输入一个三位数 把它各个数位的数加起来
//    int number;
//    cout << "请输入一个三位的数字:" << endl;
//    cin >> number;
//    cout << number % 10 + number / 10 % 10 + number / 100 << endl;

    //赋值运算符 赋值运算符是有运算结果的 结果就是赋值后变量的值
    int a = 10;
    cout << (a = 200) << endl;

    // 组合运算符
    a += 10;
    a -= 10;
    a *= 10;
    a /= 10;
    a %= 3;

    // 关系运算符
    // > < >= <= != ==
    cout << (20 == 10) << endl;

    // 逻辑运算符
    cout << (true & true) << endl;
    cout << (false | true) << endl;
    cout << (!true) << endl;
    // 相同为假 不同为真
    cout << (true ^ false) << endl;
    // || && 前面的条件满足条件 或者 不满足条件 不做后面的计算 (短路的作用)


    // 三目运算符
    int a1 = 10;
    int b1 = 20;
    cout << (a1 > b1 ? "1":"2") << endl;

    return 0;
}
