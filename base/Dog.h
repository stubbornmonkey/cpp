//
// Created by 倔强的猴子 on 2026/4/21.
//

#ifndef BASE_DOG_H
#define BASE_DOG_H
#include <iostream>
using namespace std;

class Dog {
public:
    string name;
    int age;
    static int numberOfObjs;
    // only declare
    void bark();
};


#endif //BASE_DOG_H
