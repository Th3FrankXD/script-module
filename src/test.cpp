#include <script.h>
#include <functions.h>
#include <iostream>

void Player::Update() {
    Engine::func1(222);
    std::cout << Engine::func2() << std::endl;
    std::cout << Engine::func3(2, 4.0) << std::endl;
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec = Engine::func4(vec);
    for (int i: vec) {
        std::cout << i << std::endl;
    }
    Engine::func5();
}

void Enemy::Update() {
    Engine::func1(72);
}