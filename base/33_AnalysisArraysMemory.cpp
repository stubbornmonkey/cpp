//
// Created by 倔强的猴子 on 2026/4/19.
//
#include <iostream>
using namespace std;

int main() {

    // 数组的地址是一块连续的地址 每一块地址的大小为数据类型的大小 （总大小为 数据类型大小 * 数组长度）
    int array[10] = {1,2,3,4,5};

    // 访问他们的地址
    for(int i = 0;i < 10;i++) {
        // 他们之前相差四
        cout << &array[i]<< endl;
    }

    // 数组的地址为首个元素的地址
    cout << array << endl;

    // 访问首个元素
    cout << *array << endl;


    return 0;
}