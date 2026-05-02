//
// Created by 倔强的猴子 on 2026/5/2.
//
// 模板函数案例
/*
#include <iostream>
#include <sstream>

using namespace std;

// 写一个模板函数用来拼接数组中的元素
template<typename T>
string toString(T* array, int len) {
    if (len == 0 || array == nullptr) {
        return "[]";
    }
    ostringstream oss;
    oss << "[";
    for(int i = 0;i < len - 1;i++) {
        oss << array[i] << ",";
    }
    oss << array[len - 1] << "]";
    return oss.str();
}

int main() {

    int array[] = {1,2,34,5,6,7,8};

    int len = sizeof(array) / sizeof(int);

    cout << toString(array,len) << endl;

    return 0;
}
 */