//
// Created by 倔强的猴子 on 2026/4/25.
//
/*
#include <iostream>
using namespace std;

class Home {
    // define a friend
    // it can visit current class private attribute
    friend void visitPrivate(Home* home);
public:
    string publicRoom = "living room";
private:
    string privateRoom = "bedroom";
};

void visitPrivate(Home* home) {
    cout << home->publicRoom << endl;
    cout << home->privateRoom << endl;
}

int main() {

    Home home;

    visitPrivate(&home);

    return 0;
}
 */