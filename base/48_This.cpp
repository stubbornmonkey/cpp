//
// Created by 倔强的猴子 on 2026/4/24.
//
/*
#include <iostream>
using namespace std;

// this is a pointer, it point current object
// in class,when you visit class member, you should use this->
// but In most cases,we can omit this->
// in a case, we cant omit this->
// partial variable name is same as attribute
class Person{
public:
    string name;
    int age;

    Person(int age):age(age) {}

    int getAge() {
        return age;
    }
    void setAge(int age) {
        this->age = age;
    }
};

int main() {

    Person xiaobai(10);

    cout << xiaobai.getAge() << endl;

    Person xiaoming(20);
    cout << xiaoming.getAge() << endl;

    return 0;
}
 */