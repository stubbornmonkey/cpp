//
// Created by 倔强的猴子 on 2026/5/5.
//
#include <iostream>

using namespace std;

// string容器的创建
void test01() {
    // 无参构造器
    string str1 = string();

    // 初始化的构造器(默认构造器)
    string str2 = string("hello word");
    cout << str2 << endl;
    // char数组默认构造
    char *c = "hello word";
    string str3 = string(c);
    cout << str3 << endl;

    // 指定数量和字符类型的默认创建
    string str4 = string(5, 'A');
    cout << str4 << endl;
}

// 字符串赋值
void test02() {
    string str = string();
    // 等号赋值
    // 直接赋值
    str = "hello word";
    cout << str << endl;

    // char数组赋值
    char *arr = "abc";
    str = arr;
    cout << str << endl;

    // 将字符赋值给字符串
    str = 'a';
    cout << str << endl;

    // assign() 赋值 普通字符串赋值
    str.assign("hello word");
    cout << str << endl;

    // 字符数组赋值
    str.assign(arr);
    cout << str << endl;

    // 字符数组的前n个字符
    str.assign(arr, 2);
    cout << str << endl;

    // 固定数量的字符
    str.assign(20, 'z');
    cout << str << endl;

    // 从第几个字符开始往后的几个字符
    str.assign(arr, 1, 2);
    cout << str << endl;
}

// string存取字符
void test03() {
    string str = "hello word";
    // 通过下标获取字符
//    char& operator[](int n);//通过[]方式取字符
//    char& at(int n);//通过at方法获取字符
    cout << str[4] << endl;
    cout << str.at(4) << endl;

    // 字符引用来存储字符串的指定位置的字符
    char &c = str[4];

    // 修改指定位置的字符
    c = '!';

    cout << str << endl;

    // 注意事项
    // 字符串一旦进行了内存的重新分配 用引用可能会出现问题
    // 字符串 大于等于16位时 重新分配字符串
    // c_str():将c++风格的字符串转换位c风格的字符串(返回c++中维护字符数组的指针)
    cout << (int *) str.c_str() << endl;
    str = "1234567891234567";
    cout << (int *) str.c_str() << endl;

    // 访问不到 出现错误
//    c = 'A';
//    cout << str << endl;
}

// string的拼接
void test04() {

    // +
    string str = "hello";
    // 不常用
//    string str1 = str + " word";
//    cout << str1 << endl;

    // +=
//    string& operator+=(const string& str);//重载+=操作符
//    string& operator+=(const char* str);//重载+=操作符
//    string& operator+=(const char c);//重载+=操作符

//    str += " word";
//    cout << str << endl;

//    char* array = " word";
//    str += array;
//    cout << str << endl;

//    str += 'c';
//    cout << str << endl;

    // append
//    string& append(const char *s);//把字符串s连接到当前字符串结尾
//    string& append(const char *s, int n);//把字符串s的前n个字符连接到当前字符串结尾
//    string& append(const string &s);//同operator+=()
//    string& append(const string &s, int pos, int n);//把字符串s中从pos开始的n个字符连接到当前字符串结尾
//    string& append(int n, char c);//在当前字符串结尾添加n个字符c

//    char* array = " word";
//    str.append(array);
//    cout << str << endl;

//    str.append(" word");
//    cout << str << endl;

//    str.append(6,'A');
//    cout << str << endl;

//    str.append("nihao",2,3);
//    cout << str << endl;

//    char* array = " word nihao";
//    str.append(array,5);
//    cout << str << endl;

}

// string的查找和替换
void test05() {
//    int find(const string& str, int pos = 0) const; //查找str第一次出现位置,从pos开始查找
//    int find(const char* s, int pos = 0) const;  //查找s第一次出现位置,从pos开始查找
//    int find(const char* s, int pos, int n) const;  //从pos位置查找s的前n个字符第一次位置
//    int find(const char c, int pos = 0) const;  //查找字符c第一次出现位置

//    string str = "c++ is the most popular,most useful programming language";
//    cout << str.find("most") << endl;
//    cout << str.find("most",20) << endl;
//    cout << str.find('s') << endl;
//    cout << str.find("mostmost",0,4) << endl;


}

int main() {

//    test01();

//    test02();

//    test03();

//    test04();

    test05();

    return EXIT_SUCCESS;
}
