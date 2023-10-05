#include <unistd.h>
#include <stdio.h>
#include <netdb.h>
#include <fstream>
#include <iostream>

#include <mainMenu.h>
#include <adminFunction.h>

void adminVerification(void) {
    system("clear");
    std::cout << "\n\n\n\n\n\t\t\t\t\t";
    std::cout << "\n\n\n\t\t\t\t\tEnter Password : ";
    
    std::string inputPassword;
    bool wrongPassword;
    do {
        std::cin >> inputPassword;
        wrongPassword = (inputPassword != "password");
        if (wrongPassword) {
            system("clear");
            std::cout << "\n\n\n\n\n\t\t";
            std::cout << "wrong password!, try again or type \'menu\' to Navigate to Main Menu.";
            std::cout << "\n\n\n\t\t\t\t\tEnter Password : ";
        }
        wrongPassword = (inputPassword == "Menu");
        if (wrongPassword) {
            jumpPoint:
                wrongPassword = true;
        } else {
            wrongPassword = (inputPassword == "menu");
            if (wrongPassword) goto jumpPoint;
            wrongPassword = (inputPassword == "MENU");
            if (wrongPassword) goto jumpPoint;
            wrongPassword = false;
        }
        if (wrongPassword) {
            mainMenu();
        }
        wrongPassword = (inputPassword != "password");
        if (!wrongPassword) {
            adminFunction();
            return;
        }
    } while(true);
}