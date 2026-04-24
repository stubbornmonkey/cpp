//
// Created by 倔强的猴子 on 2026/4/25.
//
#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
public:

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
    Person p ("xiaoming",10);

    p.fixPerson("小明",20);
    p.show();
    return 0;
}