//
// Created by 倔强的猴子 on 2026/4/29.
//
/*
// 菱形继承
//      两个类继承了同一个父类 又有相同的子类
// 虚继承
//      为了解决菱形继承带来的二义性问题
#include <iostream>
using namespace std;

class Animal{
public:
    int age;
};

class horse:public virtual Animal{
public:
    int a;
};

class donkey:public virtual Animal{
public:
    int b;
};

class mule:public horse,public donkey{};

int main() {

    mule m;
    cout << m.a << endl;
    cout << m.b << endl;

    // 这里会出现二义性
    //cout << m.age << endl;

    // 解决方法一  显示调用
    //cout << m.horse::age << endl;
    //cout << m.donkey::age << endl;

    // 解决方法二 虚拟继承
    cout << m.age << endl;

    return 0;
}
*/