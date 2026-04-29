//
// Created by 倔强的猴子 on 2026/4/29.
//
/*
#include <iostream>
using namespace std;
// 结构体和类类似 和结构体只有一点不一样
// 结构体默认的权限是 公共的 而类是私有的
struct Student{
    int age;
    string name;

    Student() {
        age = 0;
        name = "";
    }

    Student(int age,string name): age(age),name(name){};

    ~Student(){
        cout << "Student的析构函数" << endl;
    }
};


int main() {

    Student student;

    student.name = "nima";

    Student* student1 = new Student();

    delete student1;

    return 0;
}
 */