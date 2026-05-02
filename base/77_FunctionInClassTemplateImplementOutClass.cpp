//
// Created by 倔强的猴子 on 2026/5/2.
//
// 类模板中的函数在类外实现
/*
#include <iostream>
using namespace std;
template<typename T1,typename T2>
class Cal{
public:
    T1 t1;
    T2 t2;

    Cal();
    Cal(T1 t1,T2 t2);
};

// 类外实现 也要指定类型
template<typename T1,typename T2>
Cal<T1,T2>::Cal() {

}


template<typename T1,typename T2>
Cal<T1,T2>::Cal(T1 t1,T2 t2) {
    this->t1 = t1;
    this->t2 = t2;
}


int main() {
    return 0;
}
 */