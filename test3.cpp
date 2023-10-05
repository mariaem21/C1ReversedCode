#include "mix.h"
#include "undo.h"

void test2(char* input){
    if(input == (char *)0 ){
        std::string str1 = "10010110 10010001 10011010 10001011 10100000 10010001 10001011 10010000 10011110";
        std::string str2;
        std::string local_88;
        mix(str2);
        undo(local_88);
    }
}