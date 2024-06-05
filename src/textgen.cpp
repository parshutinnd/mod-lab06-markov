#include "textgen.h"
#include <string>
#include <iostream>
#include <map>
#include <vector>
#include <fstream>
<<<<<<< HEAD
#include <random>
#include  <iterator>

template<typename Iter, typename RandomGenerator> 
Iter TextGen::select_randomly(Iter start, Iter end, RandomGenerator& g) {
    std::uniform_int_distribution<> dis(0, std::distance(start, end) - 1);
    std::advance(start, dis(g));
    return start;
}

template<typename Iter>
Iter TextGen::select_randomly(Iter start, Iter end) {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    return select_randomly(start, end, gen);
}
=======
>>>>>>> fc4231577ac9569b0471ddcbfca1d48e80823d10

TextGen::TextGen(std::string filePath)
{
    std::string line;

<<<<<<< HEAD
    std::ifstream in(filePath); // окрываем файл для чтения
    if (in.is_open())
    {
        while (std::getline(in, line));
    }
    else {
        std::cout << "cant open" << "\n";
=======
    std::ifstream in("input.txt"); // окрываем файл для чтения
    if (in.is_open())
    {
        while (std::getline(in, line))
        {
            std::cout << line << std::endl;
        }
>>>>>>> fc4231577ac9569b0471ddcbfca1d48e80823d10
    }
    in.close();     // закрываем файл

    char separator = ' ';
    int i = 0;
<<<<<<< HEAD

    std::vector<std::string> words;

    // Temporary string used to split the string.
    std::string s;
    while (line[i] != '\0') {
        if (line[i] != separator) {
            // Append the char to the temp string.
            s += line[i];
        }
        else {
=======
    
    std::vector<std::string> words;

    // Temporary string used to split the string.
    std::string s; 
    while (line[i] != '\0') {
        if (line[i] != separator) {
            // Append the char to the temp string.
            s += line[i]; 
        } else {
>>>>>>> fc4231577ac9569b0471ddcbfca1d48e80823d10
            words.push_back(s);
            s.clear();
        }
        i++;
    }

<<<<<<< HEAD
    words.push_back("end");
    auto it = words.insert(words.begin(), "start");

    for (int i = 0; i < words.size() - 1; i++)
    {
        std::string elem = words[i];
        if (states.count(elem) == 0)
        {
            states[elem] = std::vector<std::string>();
            states[elem].push_back(words[i+1]);
        }
        else
        {
            states[elem].push_back(words[i+1]);
        }
    }

    states["end"] = std::vector<std::string>();
}

std::string TextGen::Generate(int n)
{
    std::string result;

    std::string curr = "start";
    
    for(int i = 0; i < n; i++){
        curr = *select_randomly(states[curr].begin(), states[curr].end());
        if (curr == "end") {
            curr = "start";
            i--;
        }
        else {
            result += " ";
            result += curr;
        }
    }

    return result;
=======
    for(int i = 0; i < words.size(); i++)
    {
        states[words[i]] = std::vector<std::string>();
    }
}

std::string Generate()
{
    std::string result;
>>>>>>> fc4231577ac9569b0471ddcbfca1d48e80823d10
}