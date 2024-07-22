#include "../exercise.h"

struct Fibonacci {
    int numbers[11];
    // TODO: 修改方法签名和实现，使测试通过
    int get(int i) const {
        return numbers[i];
    }
};

int main(int argc, char **argv) {
    Fibonacci constexpr FIB{{0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55}};
    ASSERT(FIB.get(10) == 55, "fibonacci(10) should be 55");
    std::cout << "fibonacci(10) = " << FIB.get(10) << std::endl;
    return 0;
}

/* const 在此位置，代表 get 方法可以在 const 对象上调用，并且不会修改对象的成员变量。
测试代码不需要更改，因为它仍然调用的是 const 修饰的 get 方法，但现在编译器不会报错了。 */