//
// Created by 倔强的猴子 on 2026/4/24.
//
/*
#include <iostream>

using namespace std;

// in cpp,we can use null pointer to visit function, but this function cant use attribute

class Person {
public:
    int age;

    Person(int age) : age(age) {};

    void test1() {
        if (this == nullptr) {
            cout << "this is a null pointer" << endl;
        }

        cout << this->age << endl;
    }


    void test2() {
        cout << "this is function test1" << endl;
    }
};

int main() {

    Person *p = nullptr;

    // cout << p->age << endl; cant visit

    p->test1();
    p->test2();

    return 0;
}
 */