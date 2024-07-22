#include "../exercise.h"
#include <numeric>

// READ: `std::accumulate` <https://zh.cppreference.com/w/cpp/algorithm/accumulate>

int main(int argc, char **argv) {
    using DataType = float;
    int shape[]{1, 3, 224, 224};
    // TODO: 调用 `std::accumulate` 计算 `shape` 的元素 会消耗多少空间？
    int size = (int) std::accumulate(shape, shape + 4, sizeof(float), [](int a, int b) { return a * b; });
    std::cout << size << std::endl;
    ASSERT(size == 602112, "4x1x3x224x224 = 602112");
    return 0;
}

/* 查官方文档，了解 std::accumulate 的使用 */