//
// Created by 倔强的猴子 on 2026/4/25.
//
/*
#include <iostream>
using namespace std;

// operator overload
class Point{
public:
    int x;
    int y;


    Point(int x,int y):x(x),y(y) {}

    // use member function implement operator overload
    Point operator-(const Point& p) {
        return {x - p.x,y - p.y};
    }

    Point operator--() {
        x++;
        y++;
        return *this;
    }

    Point operator--(int) {
        Point tmp = *this;
        x++;
        y++;
        return tmp;
    }
};

// use global function implement operator overload
// cant modify parameters
Point operator+(const Point& p1,const Point& p2) {
    // implicit create object
    return {p1.x + p2.x,p1.y + p2.y};
}

// before value
Point operator++(Point& p) {
    p.x++;
    p.y++;
    return p;
}

// after value
Point operator++(Point& p,int) {
    Point tmp = p;
    p.x++;
    p.y++;
    return tmp;
}


int main() {

    Point p1(10,20);
    Point p2(5,15);

    Point p3 = p1 + p2;

    cout << "p3.x = " << p3.x << ",p3.y = " << p3.y << endl;

    Point p4 = p1 - p2;

    cout << "p4.x = " << p4.x << ",p4.y = " << p4.y << endl;

    Point p5 = ++p1;
    cout << "x = " << p5.x << endl;
    cout << "y = " << p5.y << endl;

    Point p6 = p1++;
    cout << "x = " << p6.x << endl;
    cout << "y = " << p6.y << endl;

    return 0;
}
 */

