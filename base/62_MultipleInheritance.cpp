//
// Created by 倔强的猴子 on 2026/4/28.
//
// 多继承： 一个子类继承多个父类
/*
#include <iostream>
using namespace std;

class superClass1{
public:
    void display() {
        cout << "superClass1 被调用" << endl;
    }
};

class superClass2{
public:
    void display() {
        cout << "superClass2 被调用" << endl;
    }
};
// 继承语法:
// 子类 ：继承方式 父类,继承方式 父类....
class subClass : public superClass1,public superClass2 {

};


int main() {

    subClass s;

    // 当两个父类中出现了名字一样的成员 会出现二义性 解决这个问题 调用的时候指定名字
    s.superClass1::display();
    s.superClass2::display();


    return 0;
}
 */