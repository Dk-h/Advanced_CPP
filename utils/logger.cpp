#include <iostream>
using namespace std;

/**
 * @brief Logs a message to the standard output.
 * 
 * This function takes a C-style string (const char*) as input and prints it to the standard output followed by a newline.
 * 
 * @param message The message to be logged.
 */

void LOG(const char* message) {
    cout << message << endl;
}

void LOG2(const char* message){
    cout<<"LOG2: "<<message<<endl;
}