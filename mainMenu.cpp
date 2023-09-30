#include <string>
#include <unistd.h>
#include <stdio.h>
#include <netdb.h>
#include <fstream>
#include <iostream>

void mainMenu(void) {
    system("clear");
    std::cout << "\n\n\n\n\t\t\t\t\t Login As : ";
    std::cout << "\n\n\n\t\t\t\t\t 1. Admin ";
    std::cout << "\n\n\t\t\t\t\t 2. Student";
    std::cout << "\n\n\t\t\t\t\t 3. Exit";
    std::cout << "\n\n\n\t\t\t\t\t Enter your choice : ";
    
    int intVar1;
    std::cin >> intVar1;
    if (intVar1 == 3) {
        system("clear");
        std::cout << "\t\t\n\n\n\n\n\n\n\t\t\t\t\tQuitting The Program";
        for (int i = 0; i < 4; i++) {
            sleep(1);
            std::cout << ".";
        }
        exit(0);
    }
    if (intVar1 < 4) {
        if (intVar1 == 1) {
            //adminVerification();
            goto jumpPoint;
        }
        if (intVar1 == 2) {
            system("clear");
            std::cout << "Welcom as Student";
            //studentFunction();
            goto jumpPoint;
        }
    }
    std::cout << "invalid input";
    jumpPoint:
        system("pause");
}