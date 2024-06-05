#include "textgen.h"
#include <string>
#include <iostream>
#include <map>
#include <vector>
#include <fstream>

TextGen::TextGen(std::string filePath)
{
    std::string line;

    std::ifstream in("input.txt"); // окрываем файл для чтения
    if (in.is_open())
    {
        while (std::getline(in, line))
        {
            std::cout << line << std::endl;
        }
    }
    in.close();     // закрываем файл

    char separator = ' ';
    int i = 0;
    
    std::vector<std::string> words;

    // Temporary string used to split the string.
    std::string s; 
    while (line[i] != '\0') {
        if (line[i] != separator) {
            // Append the char to the temp string.
            s += line[i]; 
        } else {
            words.push_back(s);
            s.clear();
        }
        i++;
    }

    for(int i = 0; i < words.size(); i++)
    {
        states[words[i]] = std::vector<std::string>();
    }
}

std::string Generate()
{
    std::string result;
}