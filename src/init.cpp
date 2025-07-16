#include <iostream>
#include "shapes.h"
#include "logger.cpp"

using namespace std;

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
    
    LOG("Enter a value to calculate its square and cube:");
    int a; cin>>a;
    LOG("Square of ", a, " is " , squarea(a));
    LOG("Cube of ", a, " is ", cubea(a));
    
    PassByReference(a);
    LOG("Value after PassByReference:", a);
    
    cout << "Press Enter to exit..." << endl;

    cin.ignore();
    cin.get(); // Wait for user input before exiting
    return 0;
}