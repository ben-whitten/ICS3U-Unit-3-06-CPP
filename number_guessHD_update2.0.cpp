// Copyright (c) 2019 St. Mother Teressa HS All rights reserved.
//
// Created by: Ben Whitten
// Created on: October 2019
// This is a program which makes you play a numebr guess game.

#include <iostream>
#include <cstdlib>
#include <string>
int rand();

int main() {
    // This is what runs the game.
    std::string guessedNumber;
    int integer_as_number;

    // Input
    std::cout << "I am thinking of a number...";

    while (true) {
        std::cout << "What do you think it is?: ";
        std::cin >> guessedNumber;
        std::cout << "" << std::endl;

    // Process
        try {
            integer_as_number = std::stoi(guessedNumber);
            if (integer_as_number == (rand() % 10) + 1) {
            // Output
                std::cout << "You did it, you won!";
                std::cout << "Thanks for playing!";
                std::cout << "" << std::endl;
                break;
            } else {
                std::cout << "Wrong, try again.";
                std::cout << "" << std::endl;
            }
        } catch (std::invalid_argument) {
        std::cout << "That was not a valid number." << std::endl;
        }
    }
}
