#include <iostream>
using namespace std;

// Define a class
class HelloOOP
{
public:
    // Member function
    void displayMessage()
    {
        cout << "Hello Object Oriented Programming" << endl;
    }
};

int main()
{
    // Create an object of the class
    HelloOOP obj;

    // Call the member function using the object
    obj.displayMessage();

    return 0;
}
