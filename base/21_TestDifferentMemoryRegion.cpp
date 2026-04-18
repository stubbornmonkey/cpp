//
// Created by 倔强的猴子 on 2026/4/18.
//
// 测试不同的内存区域
/*
#include <iostream>
using namespace std;
// 代码区
// 存放代码的地方

// 全局区
// 全局变量、常量 静态变量、常量
// &查看变量的地址
int g_a = 10;
const int g_b = 10;

static int g_s_a = 10;
static const int g_s_b = 10;

// 栈区
// 主要存放函数的参数和局部变量 不需要用户管理

// 堆空间
// 是程序员手动申请的空间(主要用到关键字new) 不用了要手动释放 程序结束后被系统回收
int main() {

    // 局部变量
    int a = 10;
    const int b = 10;

    static int s_a = 10;
    static const int s_b = 10;

    cout << &g_a << endl;
    cout << &g_b << endl;
    cout << &g_s_a << endl;
    cout << &g_s_b << endl;

    cout << &a << endl;
    cout << &b << endl;
    cout << &s_a << endl;
    cout << &s_b << endl;
    return 0;
}
 */