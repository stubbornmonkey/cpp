//
// Created by 倔强的猴子 on 2026/4/20.
//
/*
#include <iostream>
using namespace std;

void showArrayElements(int* array,int len) {
    for(int i = 0;i < len;i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {

    int array[] = {1,2,3,4,5};

    // 浅拷贝 地址拷贝
    int* array_copy = array;

    showArrayElements(array,5);

    // 原数组该表 复制数组跟着改变
//    array[0] = 100;
//    showArrayElements(array,5);

    // 深拷贝 就是创建一个新的数组 将数据复制进来而已
    int array_copy2[5];

    for(int i = 0;i < 5;i++) {
        array_copy2[i] = array[i];
    }


    array[0] = 100;
    // 不会有所改变
    showArrayElements(array_copy2,5);


    return 0;
}
 */