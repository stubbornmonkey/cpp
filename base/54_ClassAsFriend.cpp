//
// Created by 倔强的猴子 on 2026/4/25.
//
/*
#include <iostream>
using namespace std;

// declare a friend class
class Friend;

class Home {
    // declare friend class
    friend class Friend;
public:
    string publicRoom = "living room";
private:
    string privateRoom = "bedroom";
};

// in class friend class,all member can visit private part
class Friend{
public:
    Home* home;

    void visit1() {
        cout << home->publicRoom << endl;
        cout << home->privateRoom << endl;
    }

    void visit2() {
        cout << home->publicRoom << endl;
        cout << home->privateRoom << endl;
    }

};
int main() {

    Home* home = new Home();

    Friend* aFriend = new Friend();

    aFriend->home = home;

    aFriend->visit1();
    aFriend->visit2();

    return 0;
}
 */