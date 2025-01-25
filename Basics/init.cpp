#include <iostream>

void LOG(const char* message);

int main() {
    LOG("Hello, World! <printed from init.cpp>");
    std::cin.get();
    return 0;
}