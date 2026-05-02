//
// Created by 倔强的猴子 on 2026/5/2.
//
// 类模板中的函数的创建时机
/*
#include <iostream>
using namespace std;

class Dog{
public:
    void bark() {}
};
class Cat{
public:
    void sleep() {}
};

template<class E>
class Person{
public:
    E pet;

    void makeSleep(){
        pet.sleep();
    };

    void makeBark() {
        pet.bark();
    }
};

int main() {

    Person<Dog> p;

    p.makeBark();

    // 类模板中的函数只会在运行的时候创建
    //p.makeSleep();

    return 0;
}
 */