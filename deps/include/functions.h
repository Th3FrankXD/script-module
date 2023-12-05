#pragma once
#include <vector>
#include <iostream>

class Script {
public:
    virtual void Update() = 0;
};

namespace Engine {
    // Test function 1
    inline void(*func1)(int var);
    inline int(*func2)(void);
    inline float(*func3)(int var1, float var2);
    inline std::vector<int>(*func4)(std::vector<int> vec1);
    inline void(*func5)(void);
}