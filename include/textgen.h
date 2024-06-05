#pragma once
#include <string>
#include <iostream>
#include <map>
#include <vector>

class TextGen{
private:
public:
    TextGen(std::string);
    std::map<std::string, std::vector<std::string>> states;
    std::string Generate(int n);
    template<typename Iter> Iter select_randomly(Iter start, Iter end);
    template<typename Iter, typename RandomGenerator> Iter select_randomly(Iter start, Iter end, RandomGenerator& g);
};

