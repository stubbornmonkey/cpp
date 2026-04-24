//
// Created by 倔强的猴子 on 2026/4/24.
//
/*
#include <iostream>

using namespace std;

class Number {
private:
    int n;
public:

    Number() {
        n = 0;
    }
    // current object n add parameter and return current object
    Number& add(int n) {
        this->n += n;
        return *this;
    }

    Number& minus(int n) {
        this->n -= n;
        return *this;
    }

    void showN() {
        cout << n << endl;
    }
};

int main() {

    Number n;
    // Implement linked call
    n.add(10).add(1).minus(5).showN();

    return 0;
}
*/