//
// Created by 倔强的猴子 on 2026/5/2.
//
/*
// 类模板继承
#include <iostream>
using namespace std;

template<class t1>
class Animal{
public:
    t1 arg;
};

// 普通函数继承模板函数要指定虚拟函数的类型
class Dog:public Animal<int>{};

// 类模板继承类模板 继承的时候也需要指定类型
template<typename E>
class Cat: public Animal<E> {

};

int main() {

    Dog xiaobai;
    xiaobai.arg = 10;

    return 0;
}
*/