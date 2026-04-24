//
// Created by 倔强的猴子 on 2026/4/24.
//
/*
#include <iostream>
using namespace std;

class Person{
public:
    string name;
    int age;
    Person(string name,int age):name(name),age(age) {}
    // define yourself copy constructor
    Person(const Person& p) {
        cout << "call copy constructor" << endl;
        name = p.name;
        age = p.age + 1;
    }
};

int main() {
    Person xiaoming("xiaoming",19);

    // call copy constructor
    Person xiaobai = xiaoming;

    // address of xiaomings name is not same as xiaobai
//    cout << &xiaoming.name << endl;
//    cout << &xiaobai.name << endl;
    cout << xiaoming.age << endl;
    cout << xiaobai.age << endl;

    return 0;
}
 */
