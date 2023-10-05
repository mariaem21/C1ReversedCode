#include <string>
#include <iostream>

std::string* mix(std::string input){
    char letter;
    long var2;
    long rsi;
    std::string in_register; //undefined double word of length 4
    std::string* result = new std::string();

    // result = (string*)(in_register + input);

    int count = 0;
    //Iterates through each character in order to invert all bits
    while(true){
        var2 = input.size();
        if(var2 <= count){
            break;
        }
        letter = input.at(count);
        if(letter == '0'){
            result->append("1");
        }
        else if(letter == '1'){
            result->append("0");
        }
        else{
            result->append(" ");
        }
        count += 1;
    }
    return result;
}