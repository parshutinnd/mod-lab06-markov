#include <iostream>
#include "textgen.h"

int main(){
    TextGen tg = TextGen("../../input.txt");
    std::cout << tg.Generate(50);
    return 0;
}
