#include "mix.h"
#include "undo.h"

void test1(int input){
    if(input == -1){
        std::string str1 = "10011000 10011010 10001011 10010111 10010000 10001100 10001011 10010001 10011110 100 10010 10011010 11110101";
        std::string str2;
        std::string local_88;
        mix(str2);
        undo(local_88);
    }
}

int main(){
    test1(-1);
}