#include "../exercise.h"

// TODO: 在这里声明函数
int add(int a, int b);

int main(int argc, char **argv) {
    ASSERT(add(123, 456) == 123 + 456, "add(123, 456) should be 123 + 456");

    auto x = 1, y = 2;
    std::cout << x << " + " << y << " = " << add(x, y) << std::endl;
    return 0;
}

int add(int a, int b) {
    // TODO: 补全函数定义，但不要移动代码行
    return a + b;
}

// // TODO: 补全函数定义，但不要移动代码行
// // THINK: `static` 修饰函数有什么效果？
// // ANSWER: `static` 修饰函数表示该函数仅在当前文件中可见，其他文件无法调用该函数。
// static int add(int a, int b) {
//     return a + b;
// }

/* 正确的函数声明 */