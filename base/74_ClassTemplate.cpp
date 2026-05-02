//
// Created by 倔强的猴子 on 2026/5/2.
//
/*
#include <iostream>
using namespace std;

template<class T1,class T2>
class NumberCalculator{
private:
    T1 n1;
    T2 n2;
public:
    NumberCalculator(){};
    NumberCalculator(T1 n1,T2 n2):n1(n1),n2(n2){};

    void showAdd() {
        cout << n1 + n2 << endl;
    }

    void showMinus() {
        cout << n1 - n2 << endl;
    }
};

// 类模板作为普通函数参数 必须指定虚拟类型
void useCal(NumberCalculator<int,int>& calculator) {
    calculator.showMinus();
}

// 类模板作为模板函数的参数 可以将参数的指定指定为虚拟类型
template<typename t1,typename t2>
void useCal02(NumberCalculator<t1,t2>& calculator) {
    calculator.showMinus();
}


int main() {

    // 类模板和函数模板不同的地方在于类模板不能推导类型 必须指定数据类型
    NumberCalculator<int,int> cal1(10,20);

    cal1.showAdd();
    cal1.showMinus();

    useCal(cal1);

    return 0;
}
 */