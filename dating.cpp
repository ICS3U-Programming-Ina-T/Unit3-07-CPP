// Copyright (c) 2021 Ina Tolo All rights reserved.
//
// Created by: Ina Tolo
// Created on: Dec. 7, 2021
// This program uses compound boolean expressions
// to determine if a pair of grandparents will
// allow the user to date their grandchild.

#include <iostream>
#include <string>


int main() {
    // this function checks if the user can
    // date the grandchild

    std::string user_rich;
    std::string user_looks;
    const std::string YES = "yes";
    const std::string NO = "no";

    // display opening message
    std::cout << "Today we will determine if you can date our grandchild!";
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;

    // collect in put from the user
    std::cout << "Are you rich? (yes/no): ";
    std::cin >> user_rich;
    std::cout << "Are you really good looking? (yes/no): ";
    std::cin >> user_looks;
    std::cout << "" << std::endl;

    // process
    if (user_rich == YES || user_looks == YES) {
        // output
        std::cout << "You can date our grandchild!";
    } else if (user_rich == YES && user_looks == NO) {
        std::cout << "You can date our grandchild!";
    } else if (user_rich == NO && user_looks == YES) {
        std::cout << "You can date our grandchild!";
    } else if (user_rich != YES && user_rich != NO) {
        std::cout << "This is invalid. Please enter a valid response.";
    } else if (user_looks != YES && user_looks != NO) {
        std::cout << "This is invalid. Please enter a valid response.";
    } else {
        std::cout << "You cannot date our grandchild.";
        }
}
