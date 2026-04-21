//
// Created by 倔强的猴子 on 2026/4/21.
//

// Static member is shared all objects
/*
#include <iostream>
using namespace std;
class A {};
class myNumber {
public:
    // only define in class,out of class initialization (static variable)
    static int a;
    // static constant and datatype are char,short,int,long,long long can initialization
    const static int b = 10;
    // out of class initialization
    static A aa;

    static void f() {
        cout << "visit f function" << endl;
    }
};
// initialization class myNumbers a
int myNumber::a = 10;
A myNumber::aa = A();


int main() {
    // visit static attribute
    // recommend use class to visit static member
    // Method 1:use object to visit static attribute
    myNumber number1;
    myNumber number2;

    cout << number1.a << endl;
    cout << number2.a << endl;

    // Method 1: use object visit static function
    number1.f();
    // Method 2: use class to visit static attribute
    myNumber::a = 10;

    // Method2 : use class to visit static function
    myNumber::f();

    cout << myNumber::a << endl;
    cout << number2.a << endl;
    cout << number1.a << endl;

    return 0;
}
 */