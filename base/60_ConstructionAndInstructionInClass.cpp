//
// Created by 倔强的猴子 on 2026/4/28.
//
// 在创建子类的对象之前会调用父类的无参构造函数
// 子类的对象在销毁的时候 先调用自己的析构函数 在调用父类的析构函数
// 没有无参构造函数怎么办?
// 1、在父类中写上午餐构造函数
// 2、在子类中显示的调用父类中存在的构造函数
/*
#include <iostream>
using namespace std;

class Animal{
public:
    int age;

//    Animal():age(0) {
//        cout << "Animal的无参构造函数被调用" << endl;
//    }

    Animal(int age): age(age) {
        cout << "Animal的有参构造函数被调用" << endl;
    }

    ~Animal() {
        cout << "Animal中的析构函数被调用了" << endl;
    }
};

class Dog:public Animal{
public:
    Dog(): Animal(10) {
        cout << "Dog的无参构造函数被调用" << endl;
    }

    ~Dog() {
        cout << "Dog中的析构函数被调用了" << endl;
    }
};

int main() {

    Dog dog;


    return 0;
}
 */
