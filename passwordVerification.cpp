#include <cstdlib>
#include <iostream>
#include <string>
#include <unistd.h>

#include <augh.h>
#include <mainMenu.h>

void passwordVerification(void) {
  std::string inputPassword;

  system("clear");
  std::cout << "\n\n\n\n\n\t\t\t\t\t";
  std::cout << "\n\n\n\t\t\t\t\tEnter Password : ";
  while (1) {
    std::cin >> inputPassword;
    if (inputPassword != "password") {
      system("clear");
      std::cout << "\n\n\n\n\n\t\t"
                << "wrong password!, try again or type \'quit\' / \'exit\' to Quit The program.";
      std::cout << "\n\n\n\t\t\t\t\tEnter Password : ";
    }

    // to quit
    if (inputPassword =="Quit" || inputPassword == "quit" || inputPassword == "exit" || inputPassword == "EXIT" || inputPassword == "QUIT" || inputPassword == "Exit") {
      std::cout << "\t\t\n\n\n\n\n\n\n\t\t\t\t\tQuitting The Program";
      for (int i=0; i<4; i++) {
        sleep(1);
        std::cout << ".";
      }
      exit(0);
    }

    int flag = augh(inputPassword);
    if (flag != 0) {
      mainMenu();
      return;
    }
  }