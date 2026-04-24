//
// Created by 倔强的猴子 on 2026/4/24.
//
/*
#include <iostream>
using namespace std;

class cat {
public:
    string name;
    int age;
};

class Person{
public:
    string name;
    int age;
    cat* pet;

    Person() {

    }

    // shallow copy
//    Person(const Person& p) {
//        age = p.age;
//        name = p.name;
//        pet = p.pet;
//    }

    // deep copy
    Person(const Person& p) {
        age = p.age;
        name = p.name;
        pet = new cat();
        pet->name = p.pet->name;
        pet->age = p.pet->age;
    }

    ~Person() {
        if (pet != nullptr) {
            delete pet;
            pet = nullptr;
        }
    }
};

int main() {

    Person xiaoming;
    Person xiaobai = xiaoming;

    return 0;
}
 */