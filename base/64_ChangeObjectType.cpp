//
// Created by 倔强的猴子 on 2026/4/29.
//
// 对象转型
//  对象转型之后 不能调用子类中的成员
// virtual
//      用来修饰函数使其成为虚函数 虚函数用来解决父类引用/指针 调用不到子类的函数问题
/*
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void bark() {
        cout << "Animal bark" << endl;
    }
};

class Dog : public Animal {
public:
    int age;
    // override 用来标记为重写函数
    void bark() override {
        cout << "dog bark" << endl;
    }
};

int main() {

    //对象转型: 父类的引用指向子类
    // 方法一
    Dog dog;
    Animal &animal = dog;
//    animal.age;
//    animal.bark(); Animal bark()

    // 方法二
    // 父类的指针指向dog
    Dog *dog1 = new Dog();
    Animal *animal1 = dog1;
//    animal1->age;

    animal.bark(); // dog bark
    return 0;
}
 */