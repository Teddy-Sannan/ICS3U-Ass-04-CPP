// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Teddy Sannan
// Created on: October 2019
// This takes two numbers
//  and prints which is greater

#include <iostream>

int main() {
    // variable declaration
    int number1;
    int number2;

    // input
    std::cout << "Please enter your first number: ";
    std::cin >> number1;

    std::cout << "Please enter your second number: ";
    std::cin >> number2;

    // process & output
    try {
        if (number1 > number2) {
            std::cout << "" << std::endl;
            std::cout << (number1) <<" is greater" << std::endl;
        } else if (number2 > number1) {
            std::cout << "" << std::endl;
            std::cout << (number2) <<" is greater" << std::endl;
        } else {
            std::cout << "" << std::endl;
            std::cout << "Both numbers are equal" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "";
        std::cout << "Invalid Input";
    }
}
