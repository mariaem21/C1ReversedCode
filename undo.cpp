#include <string>
#include <iostream>

std::string* undo(std::string input){
    std::string* result = new std::string(input);
    std::string user;
    std::cin >> user;
    result->append(user);
    return result;
}