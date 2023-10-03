#include "mix.h"
#include "undo.h"
#include <netdb.h>

void test2(struct hostent *input){
    if(input == (hostent *)0 ){
        std::string str1 = "10011000 10011010 10001011 10010111 10010000 10001100 10001011 10011101 10000110 100 10001 10011110 10010010 10011010";
        std::string str2;
        std::string local_88;
        mix(str2);
        undo(local_88);
    }
}