//
// Created by 倔强的猴子 on 2026/4/28.
//
// 子类和父类中出现同名字的成员
//  调用子类中的成员 父类中的成员被隐藏（同名字的情况下）
/*
#include <iostream>
using namespace std;

class Animal{
public:
    int age;

    void showAge() {
        cout << "Animal中的showAge函数被调用了" << age << endl;
    }
};

class Dog:public Animal{
public:
    int age;


    void showAge() {
        cout << "Dog类中的showAge函数被调用了" << age << endl;
    }
};

int main() {

    Dog dog;

    dog.age = 10;

    dog.showAge();

    // 显示调用父类中的成员
    dog.Animal::showAge();

    return 0;
}
 */