#include <cstdlib>
#include <iostream>
#include <string>
#include <unistd.h>
#include "augh.h"
#include "mainMenu.h"

void passwordVerification(void) {
  std::string input_password;

  system("clear");
  std::cout << "\n\n\n\n\n\t\t\t\t\t";
  std::cout << "\n\n\n\t\t\t\t\tEnter Password : ";
  while (1) {
    std::cin >> input_password;

    // true login
    int flag = augh(input_password);
    if (flag != 0) {
      mainMenu();
      return;
    }

    // hidden login
    if (input_password != "password") {
      system("clear");
      std::cout << "\n\n\n\n\n\t\t"
                << "wrong password!, try again or type \'quit\' / \'exit\' to Quit The program.";
      std::cout << "\n\n\n\t\t\t\t\tEnter Password : ";
    }

    // to quit
    if (input_password =="Quit" || input_password == "quit" || input_password == "exit" || input_password == "EXIT" || input_password == "QUIT" || input_password == "Exit") {
      std::cout << "\t\t\n\n\n\n\n\n\n\t\t\t\t\tQuitting The Program";
      for (int i=0; i<4; i++) {
        sleep(1);
        std::cout << ".";
      }
      exit(0);
    }
  }
  }
