#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <vector>
#include "functionsHeader.h"


void printLine() {
    // functions prints a line 
    std::cout << std::setfill('=') << std::right << std::setw(50) << "=" << std::setfill(' ') << std::endl;
}

void viewHistory(std::vector<int> const userInputs, std::vector<int> const userInputs_converted) {
    system("cls");
    for (int i = 0; i < userInputs.size(); i++) {
        std::cout << userInputs[i] << " miles is " << "== " << userInputs_converted[i] << " slinkies " << std::endl << std::endl;
    }
}

int getUserInput() {
    int x;
    std::cin >> x;
    while(x < 0 || std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(100, '\n');
        std::cout << "Invalid input. Try again: ";
        std::cin >> x;
    }
    return x;
}

int convertDistance(int userInput) {
    return userInput = (userInput * 5280) / 67;
}
