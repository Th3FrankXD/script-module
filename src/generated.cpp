#include <windows.h>
#include <functions.h>
#include <unordered_map>
#include <string>

#include <script.h>

#include <iostream>

template <typename T>
Script* GetScript() {
    return new T;
}

extern "C" __declspec(dllexport)
std::unordered_map<std::string, Script*(*)()> GetScripts() {
    std::unordered_map<std::string, Script*(*)()> scripts;

    scripts.emplace("Player", (Script*(*)())GetScript<Player>);
    scripts.emplace("Enemy", (Script*(*)())GetScript<Enemy>);

    return scripts;
}

extern "C" __declspec(dllexport)
void SetFunctions(std::unordered_map<std::string, void*> funclist) {

    Engine::func1 = (void(*)(int var))                              funclist.at("func1");
    Engine::func2 = (int(*)(void))                                  funclist.at("func2");
    Engine::func3 = (float(*)(int var1, float var2))                funclist.at("func3");
    Engine::func4 = (std::vector<int>(*)(std::vector<int> vec1))    funclist.at("func4");
    Engine::func5 = (void(*)(void))                                 funclist.at("func5");
}