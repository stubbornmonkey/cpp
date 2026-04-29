//
// Created by 倔强的猴子 on 2026/4/29.
//
// 纯虚函数: 虚函数的实现部分为0，并且这个函数只用来声明 而不用来实现
// 抽象类: 拥有虚函数的类为抽象类 该类不能被实例化 并且继承该类的子类也要重写纯虚函数 否则也为抽象类
/*
#include <iostream>
using namespace std;

class Animal {
    // 纯虚函数
public:
    virtual void bark() = 0;
};

class Dog : public Animal {
public:
    void bark() override {
        cout << "dog bark()" << endl;
    }
};

class Cat : public Animal {
public:
    void bark() override {
        cout << "cat bark()" << endl;
    }
};

int main() {

    Cat cat;

    Animal& a1 = cat;

    Dog dog;
    Animal& a2 = dog;

    a1.bark();
    a2.bark();

    return 0;
}
 */