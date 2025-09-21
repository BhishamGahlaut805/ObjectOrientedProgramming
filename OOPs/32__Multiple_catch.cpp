#include<iostream>
using namespace std;

int main() {
   //Example of multiple catch blocks
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    try {
        if (b == 0) {
            throw ("Division by zero is not allowed.");
        }
        if (a < 0 || b < 0) {
            throw invalid_argument("Negative numbers are not allowed.");
        }
        cout << "Result: " << a / b << endl;
    } catch (const char* e) {
        cout << "Runtime Error: " << e << endl;
    } catch (const invalid_argument& e) {
        cout << "Invalid Argument: " << e.what() << endl;
    } catch (...) { // Catch-all handler
        cout << "An unexpected error occurred." << endl;
    }

}