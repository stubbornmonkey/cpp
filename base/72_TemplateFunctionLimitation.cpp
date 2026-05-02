//
// Created by 倔强的猴子 on 2026/5/2.
//
//#include <iostream>
//using namespace std;
//
//class Person{
//public:
//    int age;
//    Person(int age):age(age){};
//};
// 解决的第一种方法
/*
bool operator>(const Person& p1,const Person& p2) {
    return p1.age > p2.age;
}
bool operator<(const Person& p1,const Person& p2) {
    return p1.age < p2.age;
}
*/

//template<typename T>
//int compare(T& t1,T& t2) {
//    if (t1 > t2) {
//        return 1;
//    } else if (t2 > t1) {
//        return -1;
//    }
//    return 0;
//}
//
//// 函数模板的重载: 解决函数特定类型的对象的问题
//template<>
//int compare<Person>(Person& p1,Person& p2) {
//    if (p1.age > p2.age) {
//        return 1;
//    } else if (p1.age < p2.age) {
//        return -1;
//    }
//    return 0;
//}
//
//int main() {
//
//    Person xiaobai(10);
//    Person xiaohong(20);
//
//    cout << compare(xiaobai,xiaohong) << endl;
//
//    return 0;
//}
