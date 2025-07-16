#include <iostream>
#include "shapes.h"

using namespace std;

void LOG(const char* message);
void LOG2(const char* message);

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
    LOG2("Hello, World! <printed from init.cpp>");

    int a; cin>>a;
    cout<< "Square of "<< a<<" is "<< squarea(a)<< endl;
    cout<< "Cube of "<< a<<" is "<< cubea(a)<< endl;
    cin.get();
    
    
    return 0;
}