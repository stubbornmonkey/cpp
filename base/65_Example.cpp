//
// Created by 倔强的猴子 on 2026/4/29.
//
//多态案例
/*
#include <iostream>
using namespace std;

class delivery{
public:
    virtual void sendPackage() {}
};

class SF:public delivery{
public:
    void sendPackage() {
        cout << "SF 快递为您服务" << endl;
    }
};

class YT: public delivery{
public:
    void sendPackage() {
        cout << "YT 快递为您服务" << endl;
    }
};

void send(delivery& d) {
    d.sendPackage();
}

int main() {

    SF s;
    YT y;
    send(s);
    send(y);

    return 0;
}
 */
