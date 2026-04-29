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
template<typename T,typename M>
void add(T n1,M n2) {
    cout << n1 + n2 << endl;
}

template<typename T>
void mySwap(int& a,int& b) {
    T tmp = a;
    a = b;
    b = tmp;
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
    return 0;
}
 */