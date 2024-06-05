#pragma once
#include <string>
#include <iostream>
#include <map>
#include <vector>

class TextGen
{
private:
public:
    TextGen(std::string);
<<<<<<< HEAD
    std::map<std::string, std::vector<std::string>> states;
    std::string Generate(int n);
    template<typename Iter> Iter select_randomly(Iter start, Iter end);
    template<typename Iter, typename RandomGenerator> Iter select_randomly(Iter start, Iter end, RandomGenerator& g);
};
=======
    std::map<std::string,std::vector<std::string>> states;
    std::string Generate(std::string filePath);
};

>>>>>>> fc4231577ac9569b0471ddcbfca1d48e80823d10
