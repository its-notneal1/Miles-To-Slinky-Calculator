#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h> 
#include <iomanip>
#include "functionsHeader.h"

int main() {
    std::vector<int> stored_conversions, stored_userInputs;
    int userInput;
    printLine();
    std::cout << std::right << std::setw(35) << "Convert Distance in Miles to Slinkies" << std::endl;
    printLine();
    
    char userResponse;
    while (1) {
        std::cout << "Select Operation: " << std::endl;
        std::cout << "[A.] Convert Distance in Miles" << std::endl;
        std::cout << "[B.] View Input History" << std::endl;
        std::cout << "[C.] Exit Application" << std::endl;
        std::cin >> userResponse;
        std::cin.ignore(250, '\n');
        switch (userResponse) {
            case('A'):
            case('a'):
            std::cout << "Enter distance in miles: ";
            stored_userInputs.push_back(getUserInput());
            stored_conversions.push_back(convertDistance(stored_userInputs[stored_userInputs.size() - 1]));
            system("cls");
            printLine();
            std::cout << stored_userInputs[stored_userInputs.size() - 1] << " miles is around " << stored_conversions[stored_conversions.size() - 1] << " slinkies" << std::endl;
            printLine();
            break;
            case('B'):
            case('b'):
            viewHistory(stored_userInputs, stored_conversions);
            break;
            case('C'):
            case('c'):
            std::cout << "Exiting Application" << std::endl;
            return 1;
            break;
            default:
            std::cout << "Invalid Option. Please Enter again: ";
            std::cin.clear();
            break;
        }
    }
    return 0;
}
