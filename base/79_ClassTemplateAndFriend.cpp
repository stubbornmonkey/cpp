//
// Created by 倔强的猴子 on 2026/5/3.
//
// 类模板遇见友元
#include <iostream>
using namespace std;

// 声明一下类
template<class T1,class T2>
class Calculate;
// 2、在类外实现
template<class T1,class T2>
void print(const Calculate<T1,T2>& c) {
    cout << "c.n1 = " << c.n1 << ",c.n2 = " << c.n2 << endl;
}

template<class T1,class T2>
class Calculate{
    // 友元的类内实现
//    friend void print(const Calculate<int,int>& c) {
//        cout << "c.n1 = " << c.n1 << ",c.n2 = " << c.n2 << endl;
//    }
    // 类外实现友元
    // 1、带上<>表明这是一个友元
    friend void print<>(const Calculate<T1,T2>& c);

private:
    T1 n1;
    T2 n2;
public:
    Calculate(T1 n1,T2 n2):n1(n1),n2(n2){};
};

int main() {

    Calculate<int,int> cal(20,30);
    print(cal);

    return 0;
}
