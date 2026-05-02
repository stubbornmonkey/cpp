//
// Created by 倔强的猴子 on 2026/4/29.
//
/*
#include <iostream>
using namespace std;

// 定义一个模板类型
// template：模板关键字
// typename: 定义虚拟类型 可以替换为class
// T: 定义的一个虚拟类型的名字
// 模板类型也是可以指定虚拟类型的
template<typename T,typename M = int>
void add(T n1,M n2) {
    cout << n1 + n2 << endl;
}

template<typename T>
void mySwap(T& a,T& b) {
    T tmp = a;
    a = b;
    b = tmp;
}

// 虚拟类型做返回值的情况
// 当虚拟类型做返回值的时候 要求传入返回值的类型(无法推导)
// 一般会将这个类型放到第一个位置(好传入)
template<typename R,typename T1,typename T2>
R cal(T1 a,T2 b) {
    return (R) (a + b);
}



int main() {

    // 第一种方式 显示的指定类型
    add<int,double>(10,3.14);
    add<double,int>(3.14,10);
    add<double,double>(10,20);

    // 第二种方式 根据参数判断传入的参数类型
    add(10,3.14);
    add('a','b');

    // 注意事项: 在类型推导的时候 对于一样的虚拟类型 必须推导出一样的实际类型 否则会报错

    int a = cal<int>(3.16,9.99);
    cout << "a = " << a << endl;

    return 0;
}
 */