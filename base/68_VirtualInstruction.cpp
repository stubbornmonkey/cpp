//
// Created by 倔强的猴子 on 2026/4/29.
//
// 虚析构函数的使用
// 当子类中有指针类型的属性的时候 对象在销毁的时候 无法释放该指针所占的内存 所以我们要在
// 父类中写虚析构函数 让子类实现 可以在子类析构函数中实现该内存的释放
/*
#include <iostream>
using namespace std;

class Animal{
public:
    virtual ~Animal() = 0;
};

class Person: public Animal{
public:
    int* n;
    Person() {
        n = new int(10);
    }

    ~Person() override{
        if (n != nullptr) {
            delete n;
            n = nullptr;
        }
    }
};

int main() {
    return 0;
}
*/