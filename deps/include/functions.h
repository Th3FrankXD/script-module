#pragma once
#include <vector>
#include <iostream>

class Script {
public:
    virtual void Update() = 0;
};

namespace Engine {
    // Test function 1
    static void(*func1)(int var);
    static int(*func2)(void);
    static float(*func3)(int var1, float var2);
    static std::vector<int>(*func4)(std::vector<int> vec1);
    static void(*func5)(void);
    static void test(int num) {
        std::printf("%d\n", num);
    }
}