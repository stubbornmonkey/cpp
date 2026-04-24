//
// Created by 倔强的猴子 on 2026/4/24.
//
/*
#include <iostream>
using namespace std;

// destructor, end of object life cycle,is called before destroy object
class Person {
public:
    int age;
    int* p;
    //define destructor, it not have any parameters
    ~Person() {
        cout << "call destructor" << endl;
        // before destroy object, destroy memory object quote heap
        if (p != nullptr) {
            delete p;
            // prevent wail pointer
            p = nullptr;
        }
    }
};

//void test() {
//    Person person;
//}

int main() {

    //test();

    // create person in heap
    Person* person = new Person;
    person->p = new int(10);

    int* tmp = person-> p;

    // destroy person(use delete to destroy heap memory)
    delete person;

    cout << *tmp << endl;

    // pause system
    system("pause");

    return 0;
}
*/