#ifndef HELPERS_H
#define HELPERS_H

#include <iostream>
#include <string>

// Utility functions for the character-based game

// Function to display a message with a delay
void DisplayMessageWithDelay(const std::string& message, int delay) {
    std::cout << message << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(delay));
}

// Function to get user input safely
std::string GetUserInput(const std::string& prompt) {
    std::string input;
    std::cout << prompt;
    std::getline(std::cin, input);
    return input;
}

#endif // HELPERS_H