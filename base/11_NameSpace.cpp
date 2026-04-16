//
// Created by 倔强的猴子 on 2026/4/16.
//
/*
#include <iostream>

// 定义一个命名空间
namespace a {
    int num1 = 100;
    // 命名空间可以嵌套
    namespace a1 {
        int num2 = 200;
    }
}

namespace b {
    int num1 = 200;
}

// 命名空间可以随时随地的添加成员
namespace a {
    std::string str = "hello word!";
}

namespace constant1 {
    const int MAX_SCORE = 100;
}

namespace constant2 {
    const int MAX_SCORE = 150;
}

int main() {

    //1.命名空间的基本使用
    std::cout << a::num1 << std::endl;
    std::cout << b::num1 << std::endl;
    // 嵌套使用
    std::cout << a::a1::num2 << std::endl;
    std::cout << a::str << std::endl;

    //2.using关键字的使用 使用命名空间中的成员
    using a::num1;
    std::cout << num1 << std::endl;
    std::cout << a::a1::num2 << std::endl;

    //3.使用命名空间
    using namespace a;
    std::cout << a1::num2 << std::endl;
    std::cout << num1 << std::endl;

    // 使用std命名空间
    using namespace std;
    cout << str << endl;

    // 4.注意事项
    //      (1) 当命名空间和当前的命名空间出现名字相同的成员时 优先使用本命名空间
    //      (2) 当当前命名空间中没有此变量 且使用的命名空间中有两个相同的命名成员 则会出现二义性 必须在前面加上命名空间
//    const int MAX_SCORE = 200;
//    using namespace constant1;
//    cout << MAX_SCORE << endl;

    using namespace constant1;
    using namespace constant2;
    cout << constant2::MAX_SCORE << endl;
    cout << constant1::MAX_SCORE << endl;

    return 0;
}
*/