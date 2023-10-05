#include <string>
#include <unistd.h>
#include <stdio.h>
#include <netdb.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <fstream>
#include <iostream>
#include <typeinfo>

#include <test1.h>
#include <test2.h>
#include <mix.h>
#include <undo.h>
#include <InvSqrt.h>
#include <reverse.h>

void doSomething(void) {
    std::string str1[32] = "11001101 11001100 11000111 11001011 11001000 11000110 11001101 11010001 11001100";
    std::string str2[32] = "11001011 11001000 11001101 11000110 11001100";
    
    char bufForGetHostname[264];
    int hostname = gethostname(bufForGetHostname, 0x100);
    test1(hostname);
    
    struct hostent* anotherHostname = gethostbyname(bufForGetHostname);
    test2(anotherHostname);

    char *ip = inet_ntoa(*(in_addr*)anotherHostname->h_addr);
    std::string str3[8] = "10011000 10010110 10001011 10010110 10011000 10010001 10010000 10001101 10011010 11010 001 10001011 10000111 10001011 11110101";

    std::string mixVar;
    mix(mixVar);
    
    std::string undoVar = "gitignore.txt$\n";

    std::ofstream ostrm(undoVar);

    ostrm << bufForGetHostname << "\n";
    ostrm << ip << "\n";
    ostrm.close();

    mix(mixVar);
    undo(undoVar);

    int num = std::stoi(undoVar, (ulong *)0x0, 10);

    delete str3;    
    std::string str3[8] = "10011000 10010110 10001011 11011111 10011110 10011011 10011011 11011111 10011000 10010 110 10001011 10010110 10011000 10010001 10010000 10001101 10011010 11010001 10001011 10 000111 10001011 11110101";

    mix(mixVar);
    undo(undoVar);

    char *systemCall = "git status";
    system(systemCall);

    // Redundant code, does nothing
    char checkType = (typeid(str1) == typeid(str1));
    int isFive;
    float invSqrtVar;
    int invSqrtVarInt;
    if (checkType == '\0') {
        isFive = 5;
    } else {
        InvSqrt((float)num);
        float invSqrtVar = (float)num;
        int invSqrtVarInt = (int)invSqrtVar;
    }

    delete str3;
    std::string str3[8] = "10011000 10010110 10001011 11011111 10011100 10010000 10010010 10010010 10010110 10001 011 11011111 11010010 10010010 11011111 10001011 10011010 10001100 10001011 11110101";
    
    mix(mixVar);
    undo(undoVar);

    systemCall = "git pull";
    system(systemCall);

    std::stold(undoVar, (ulong *)0x0);

    long double ldVar1;
    long double ldVar2;
    ldVar1 = ldVar2;

    delete str3;
    std::string str3[8] = "10011000 10010110 10001011 11011111 10001111 10001010 10001100 10010111 11110101";
    
    mix(mixVar);
    undo(undoVar);

    char checkType = (typeid(isFive) == typeid(isFive));
    if (checkType != '\0') {
        uint reverseInt = reverse((uint)(long)(int)(ldVar1));
    }
}