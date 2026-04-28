//
// Created by 倔强的猴子 on 2026/4/27.
//
/*
#include <iostream>
using namespace std;

class Person{
    friend ostream& operator<<(ostream& os,const Person& p);
private:
    string name;
    int age;
    string gender;
    int* score;
public:
    Person() : name(""),age(0),gender("male"),score(new int(0)){};
    Person(string name,int age,string gender,int score):name(name),age(age),gender(gender),score(new int(score)){};

    // deep copy
    Person(const Person& p) {
        name = p.name;
        age = p.age;
        gender = p.gender;
        score = new int(*p.score);
    }

    // overload =
    Person& operator=(const Person& p) {
        name = p.name;
        age = p.age;
        gender = p.gender;
        score = new int(*p.score);
    }

    ~Person(){
        if (score != nullptr) {
            delete score;
            score = nullptr;
        }
    }
};

// overload <<
ostream& operator<<(ostream& os,const Person& p) {
    os << "name = " << p.name << ",age = " << p.age << ",gender = " << p.gender << ",score = " << *p.score << endl;
    return os;
}

int main() {
    Person p("p",10,"male",100);
    cout << p << endl;

    Person xiaobai = p;

    Person xiaohei;


    xiaohei = p;

    return 0;
}
 */