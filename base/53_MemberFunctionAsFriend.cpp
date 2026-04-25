//
// Created by 倔强的猴子 on 2026/4/25.
//
/*
#include <iostream>
using namespace std;
// member function as friend

// declare class Home,not this friend dont visit class home
class Home;

class goodFriend {
public:
    Home* home;
    void visitPrivate();
};

class Home {
    // define friend
    friend void goodFriend::visitPrivate();
public:
    string publicRoom = "living room";
private:
    string privateRoom = "bedroom";
};

void goodFriend::visitPrivate() {
    cout << home->publicRoom << endl;
    cout << home->privateRoom << endl;
}

int main() {

    Home* home = new Home;

    goodFriend* g = new goodFriend();
    g->home = home;
    g->visitPrivate();

    return 0;
}
*/