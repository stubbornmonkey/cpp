//
// Created by 倔强的猴子 on 2026/4/15.
//
/*
 * 控制台输入数据
 * */
#include <iostream>
#include <limits>

//int main() {
    // 控制台输入整数
//    int n1 = 0;
//    std::cout << "请输入一个整数:" << std::endl;
//    std::cin >> n1;
//    std::cout << "n1 = " << n1 << std::endl;

    // 控制台输入浮点数
//    float n1 = 0;
//    std::cout << "请输入一个浮点数:" << std::endl;
//    std::cin >> n1;
//    std::cout << "n1 = " << n1 << std::endl;

    // 控制台输入布尔类型 (只能输入0或者非0的数据)
//    bool n1 = 0;
//    std::cout << "请输入一个布尔类型的数据:" << std::endl;
//    std::cin >> n1;
//    std::cout << "n1 = " << n1 << std::endl;

    // 控制台输入字符类型
//    char n1 = 0;
//    std::cout << "请输入一个字符:" << std::endl;
//    std::cin >> n1;
//    std::cout << "n1 = " << n1 << std::endl;

    // 控制台输入一个字符串类型
//    std::string n1 = "";
//    std::cout << "请输入一个字符串:" << std::endl;
//    std::cin >> n1;
//    std::cout << "n1 = " << n1 << std::endl;

    // 1.缓冲区的问题
    //  在输入多个数据的过程中 我们的数据会被暂存 (中间用空格隔开也可以) 也可以输入不同的数据类型
    /*int num1;
    float num2;
    std::string num3;
    std::cin >> num1;
    // 忽略1位数据
    //std::cin.ignore();
    // 忽略后面的全部数据(清空缓冲区)
    //std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cin >> num2;
    std::cin >> num3;

    std::cout << "num1 = " << num1 << ", num2 = " << num2 << ", num3 = " << num3 << std::endl;
    */

    // 2.连续输入的问题
    /*int num1,num2,num3;
    std::cin >> num1 >> num2 >> num3;
    std::cout << "num1 = " << num1 << ", num2 = " << num2 << ", num3 = " << num3 << std::endl;*/

    //3.输入的错误处理
    // 获得错误状态（布尔类型）
    // 错误的状态会影响接下来的数据输入
    // cin.good(),cin.fail();
    // cin.clear() 清除状态
//    int num1 = 0;
//    std::cout << "请输入一个整数:" << std::endl;
//    std::cin >> num1;
//    std::cout << "num1 = " << num1 << std::endl;
//    std::cout << "good = " << std::cin.good() << ",fail = " << std::cin.fail() << std::endl;
//
//    // 清除状态
//    std::cin.clear();
//    // 清空缓冲区
//    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
//
//    int num2 = 0;
//    std::cout << "请输入第二个整数:" << std::endl;
//    std::cin >> num2;
//    std::cout << "num2 = " << num2 << std::endl;
//    return 0;
//}