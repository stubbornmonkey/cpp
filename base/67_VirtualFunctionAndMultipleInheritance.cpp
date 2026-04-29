//
// Created by 倔强的猴子 on 2026/4/29.
//

// 虚函数的实现 不会出现二义性
/*
#include <iostream>
using namespace std;

class Cooker{
public:
    virtual void cook() = 0;
    virtual void eat() = 0;
    virtual void buyFood() = 0;
};

class Maid{
public:
    virtual void cook() = 0;
    virtual void clean() = 0;
};

class Person: public Cooker,public Maid{
public:
    void cook() override{
        cout << "做饭" << endl;
    }

    void eat() override{
        cout << "吃饭" << endl;
    }

    void buyFood() {
        cout << "买菜" << endl;
    }

    void clean() override {
        cout << "清理垃圾" << endl;
    }
};

int main() {
    return 0;
}
 */