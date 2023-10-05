#include <unistd.h>
#include <stdio.h>
#include <netdb.h>
#include <fstream>
#include <iostream>

#include "mainMenu.cpp"
#include "deleteData.cpp"
#include "addData.cpp"
#include "viewData.cpp"

void adminFunction(void) {
    system("clear");
    std::cout << "\n\n\t\t\t\t\t | Logged In as Admin |\n";
    std::cout << "\n\n\t\t\t\t\t 1. Add Students Detail";
    std::cout << "\n\n\t\t\t\t\t 2. Delete Students";
    std::cout << "\n\n\t\t\t\t\t 4. View Table ";
    std::cout << "\n\n\t\t\t\t\t 5. Main Menu ";
    std::cout << "\n\n\t\t\t\t\t 6. Exit";
    std::cout << "\n\n\t\t\t\t\tEnter choice : ";

    int intVar1;
    do {
        std::cin >> intVar1;
        if (false) {
            jumpPoint:
                system("clear");
                std::cout << "\n\n\t\t\t\t\t Logged In as Admin";
                std::cout << "\n\n\t\t\t\t\t 1. Add Students Record";
                std::cout << "\n\n\t\t\t\t\t 2. Delete Record";
                std::cout << "\n\n\t\t\t\t\t 4. View Table ";
                std::cout << "\n\n\t\t\t\t\t 5. Main Menu ";
                std::cout << "\n\n\t\t\t\t\t 6. Exit (Leave Program)";
                std::cout << "\n\n\t\t\t\t\t invalid input!";
                std::cout << "\n\n\t\t\t\t\t Enter choice : ";
        } else {
            switch(intVar1) {
                default:
                    goto jumpPoint;
                case 1:
                    addData();
                    break;
                case 2:
                    deleteData();
                    break;
                case 3:
                    std::cout << "this option is not available";
                    break;
                case 4:
                    viewData();
                    break;
                case 5:
                    mainMenu();
                    break;
                case 6:
                    system("clear");
                    std::cout << "\t\t\n\n\n\n\n\n\n\t\t\t\t\tQuitting The Program";
                    for (int i = 0; i < 4; i++) {
                        sleep(1);
                        std::cout << ".";
                    }
                    exit(0);
            }
        }
    } while(true);
}