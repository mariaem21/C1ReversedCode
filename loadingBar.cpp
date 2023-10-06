#include <cstdlib> 
#include <iostream>
#include <unistd.h>
#include "doSomething.h"

void loadingBar(void) {
    int intVar;

    system("clear");
    doSomething();
    std::cout << "\n\n\n\n\n\t\t\t\t\tStudent\'s Data Management Syste m";
    std::cout << "\n\t\t\t\t\tProject By Ajay Singh";
    std::cout << "\n\t\t\t\t\tForked by Table 11 for CSCE 451, Educational purposes";
    std::cout << "\n\n\n\t\t\t\t\tLoading...\n";
    std::cout << std::endl;
    std::cout << "\t\t\t\t\t";

    for (intVar = 0; intVar < 5; intVar +=1) {
        sleep(1);
    }
    return;
}