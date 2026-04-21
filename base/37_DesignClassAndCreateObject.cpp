//
// Created by 倔强的猴子 on 2026/4/21.
//
/*
#include <iostream>

using namespace std;

// use class to describe class

// visited authority
// private: only visit in class
// protected: can visit in class and subclass;
// public: everywhere can visit

// design a class
class Person {
    // we use variable to describe persons attribute
    // default authority is private
// change authority to public
public:
    int age;
    int score;

    // use function to describe persons behavior
    void eat() {
        cout << "我会吃饭" << endl;
    }

    void sleep() {
        cout << "我要睡觉了" << endl;
    }
};

int main() {

    // create Object
    // create object in stack
    // if class has attribute,its size is sum of all attribute size
    // if class no attribute, its size is 1;
    Person xiaoMing = Person();
    // create object in heap (this is a pointer in stack) have default value
    Person *xiaoBai = new Person();

    Person xiaoHong; // is equal to Person xiaoHong = Person();

    // get objects size
    cout << sizeof(xiaoMing) << endl; // 8


    // use . to visit object in stack member
    xiaoMing.age = 18;
    xiaoMing.score = 100;
    cout << xiaoMing.age << endl;
    cout << xiaoMing.score << endl;
    xiaoMing.eat();
    xiaoMing.sleep();

    // Method 1: visit object in heap member
    (*xiaoBai).age = 19;
    (*xiaoBai).score = 80;
    cout << (*xiaoBai).age << endl;
    cout << (*xiaoBai).score << endl;
    (*xiaoBai).eat();
    (*xiaoBai).sleep();

    // Method 2: use -> to visit object in heap member
    xiaoBai->age = 19;
    xiaoBai->score = 88;
    cout << xiaoBai->age << endl;
    cout << xiaoBai->score << endl;
    xiaoBai->eat();
    xiaoBai->sleep();

    return 0;
}
 */