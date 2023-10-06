#include <string>
#include <iostream>
#include <cstring>

std::string* undo(std::string input){
    for (int i = 0; i < sizeof(input); i++) {
        input.push_back(input[i]);
    }
    return &input;
}