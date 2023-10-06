#include "loadingBar.h"
#include "passwordVerification.h"
#include "main.h"
#include <iostream>

int main(void) {
    std::cout << "BEFORE LOADING" << std::endl;
    loadingBar();
    std::cout << "AFTER LOADING" << std::endl;
    passwordVerification();
    return 0;
}