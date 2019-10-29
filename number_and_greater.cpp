// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Teddy Sannan
// Created on: October 2019
// This takes two numbers
//  and prints which is greater

#include <iostream>
#include <string>

int main() {
    // variable declaration
    std::string number1AsString;
    std::string number2AsString;
    int number1AsNumber;
    int number2AsNumber;

    // input
    std::cout << "Please enter your first number: ";
    std::cin >> number1AsString;

    std::cout << "Please enter your second number: ";
    std::cin >> number2AsString;

    // process & output
    try {
        number1AsNumber = std::stoi(number1AsString);
        number2AsNumber = std::stoi(number2AsString);
        if (number1AsNumber > number2AsNumber) {
            std::cout << "" << std::endl;
            std::cout << (number1AsNumber) <<" is greater" << std::endl;
        } else if (number2AsNumber > number1AsNumber) {
            std::cout << "" << std::endl;
            std::cout << (number2AsNumber) <<" is greater" << std::endl;
        } else {
            std::cout << "" << std::endl;
            std::cout << "Both numbers are equal" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "" << std::endl;
        std::cout << "Invalid Input" << std::endl;
    }
}
