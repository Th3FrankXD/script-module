#include <functions.h>
#include <script.h>
#include <iostream>

void Player::Update() {
    // std::cout << func2() << std::endl;
    // std::cout << func3(2, 4.0) << std::endl;
    // std::vector<int> vec;
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    // vec.push_back(5);
    // vec = func4(vec);
    // for (int i: vec) {
    //     std::cout << i << std::endl;
    // }
    // func5();
    printf("%p, %p\n", Engine::func1, &Engine::func1);
    Engine::test(543543543);
}

void Enemy::Update() {
    printf("%p, %p\n", Engine::func1, &Engine::func1);
}