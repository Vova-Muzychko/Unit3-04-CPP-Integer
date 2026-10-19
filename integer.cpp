// Copyright (c) 2026 VovaM All rights reserved.
// Created by: VovaM
// Created on: October 19, 2026
// This program checks if an integer is positive, negative, or zero.
#include <iostream>

int main() {
    // Variable declaration
    int userNumber;

    // Input
    std::cout << "Enter an integer: ";
    std::cin >> userNumber;

    // Process & Output
    if (userNumber > 0) {
        std::cout << "It is a positive number." << std::endl;
    } else if (userNumber < 0) {
        std::cout << "It is a negative number." << std::endl;
    } else {
        std::cout << "It is zero." << std::endl;
    }

    return 0;
}
