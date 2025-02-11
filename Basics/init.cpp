#include <iostream>

void LOG(const char* message);

/**
 * @brief Entry point of the program.
 * 
 * This function prints "Hello, World! <printed from init.cpp>" to the console
 * and waits for the user to press Enter before exiting.
 * 
 * @return int Returns 0 upon successful execution.
 */
int main() {
    LOG("Hello, World! <printed from init.cpp>");
    std::cin.get();
    return 0;
}