#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    try {
        if (b == 0) {
            throw runtime_error("Division by zero is not allowed.");
        }
        cout << "Result: " << a / b << endl;
    } catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    cout << "Program continues after exception handling." << endl;
    //another example

    int arr[5] = {1, 2, 3, 4, 5};
    int index;
    cout << "Enter an index (0-4): ";
    cin >> index;
    try {
        if (index < 0 || index >= 5) {
            throw string("Index out of range.");
        }
        cout << "Element at index " << index << ": " << arr[index] << endl;
    } catch (const string& e) {
        cout << "Error: " << e << endl;
    }
    return 0;
}// Exception handling in C++ is done using the try, catch, and throw keywords.

// The try block contains code that may throw an exception.
// The throw statement is used to signal that an exception has occurred.
// The catch block is used to handle the exception and define how the program should respond to it
// In this example, we attempt to divide two integers. If the second integer is zero, we throw a runtime_error exception.