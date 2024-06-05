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
    std::map<std::string,std::vector<std::string>> states;
    std::string Generate(std::string filePath);
};

