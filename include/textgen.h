#pragma once
#include <string>
#include <iostream>
#include <map>
#include <vector>
#include <random>

class TextGen{
private:
public:
    TextGen(std::string);
    std::map<std::string, std::vector<std::string>> states;
    std::string Generate(int n);
    std::vector<std::string>::iterator select_randomly(std::vector<std::string>::iterator start, std::vector<std::string>::iterator end);
    std::vector<std::string>::iterator select_randomly(std::vector<std::string>::iterator start, std::vector<std::string>::iterator end, static std::mt19937& g);
};

