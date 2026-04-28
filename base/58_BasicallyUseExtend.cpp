//
// Created by 倔强的猴子 on 2026/4/28.
//

// 继承的特点:
// 1、子类会继承所有父类中的非静态成员(除了构造函数和析构函数)
// 2、在c++中 一个子类可以继承多个父类(多继承)
// 子类也会继承父类中的私有属性 只不过因为权限的问题无法访问
/*
#include <iostream>
using namespace std;

class Animal {
public:
    int age;

    void walk() {
        cout << "animal walk" << endl;
    }

protected:
    int s;
private:
    int g;
};

// 继承的语法
// class 子类: 继承方式 父类
class Dog : public Animal {
public:
    void test() {
        cout << age << endl;
        cout << s << endl;
        // 父类中私有的属性无法被访问
        //cout << p << endl;
    }
};

int main() {

//    Dog dog;


    // 判断一下私有的属性会不会被继承
    Animal animal;
    Dog dog;
    cout << sizeof(dog) << endl;// 12
    cout << sizeof(animal) << endl;//12

    return 0;
}
 */