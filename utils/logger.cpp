#include <iostream>
#include <sstream>
using namespace std;

/**
 * @brief Logs a message to the standard output.
 * 
 * This function takes a C-style string (const char*) as input and prints it to the standard output followed by a newline.
 * 
 * @param message The message to be logged.
 */

void LOG(const char* message) {
    cout << "[LOG] : " << message << endl;
}

void LOG(auto variable) {
    cout << "[LOG] : " << variable << endl;
}

void LOG(const string& message) {
    cout << "[LOG] : " << message << endl;
}


template <typename... T>
void LOG(T&&... args) {
    std::ostringstream oss;
    oss << "[LOG] : ";
    (oss << ... << args); // fold expression (C++17 and later)
    std::cout << oss.str() << std::endl;
}

void PassByReference(int& a) {
    // This function modifies the value of 'a' directly by reference to the original variable.
    a += 12; // Modify the value of 'a' directly
}