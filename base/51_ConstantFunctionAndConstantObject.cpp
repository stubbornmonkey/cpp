//
// Created by 倔强的猴子 on 2026/4/25.
//
/*
#include <iostream>
using namespace std;

class Person {
public:
    string name;
    // describe attribute
    // mutable attribute can modify by constant function and constant object
    mutable int age;

    Person(string name,int age):name(name),age(age) {}

    // define a constant function
    // constant function cant modify attribute
    // constant function only call constant function
    void fixPerson(string name,int age) const{
//        this->age = age;
//        this->name = name;
        //show();
    }
    void show() {
        cout << "name = " << name << ",age = " << age << endl;
    }
};
int main() {
//    Person p ("xiaoming",10);
//
//    p.fixPerson("小明",20);
//    p.show();

    // define a constant object
    // cant modify constant object attribute
    // constant object only call constant function
    // only read constant object attribute
    const Person xiaobai("xiaobai",18);

    //xiaobai.age = 20;
    // exception
    //xiaobai.name = "1";

    //xiaobai.fixPerson("nihao",20);
    //xiaobai.show();

    cout << xiaobai.name << endl;

    return 0;
}
 */

