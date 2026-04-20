//
// Created by 倔强的猴子 on 2026/4/20.
//
/*
#include <iostream>
using namespace std;

void printArray(int* array) {
//    for(int ele : array) { 报错 无法使用
//
//    }
}

int main() {

    int array[] = {1,2,3,4,5};

    int len = sizeof(array) / sizeof(int);

    // 下标遍历法
//    for(int i = 0;i < len;i++) {
//        cout << array[i] << endl;
//    }

    // 迭代遍历
    // 注意事项: 1、这种遍历方法只能在定义数组的函数中使用 在其他函数中不能使用
    //          2、这种遍历方法无法修改数组中的元素 要想修改用引用
//    for(int ele : array) {
//        cout << ele << endl;
//    }

    // 加上引用就可以修改了
    for(int& ele : array) {
        cout << ele << endl;
        if (ele == 5) {
            ele = 100;
        }
    }

    for(int ele : array) {
        cout << ele << endl;
    }

    return 0;
}
*/