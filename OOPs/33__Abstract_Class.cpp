#include<iostream>
using namespace std;

// Abstract Class in C++
// An abstract class is a class that cannot be instantiated on its own and is meant to be inherited by other classes.

class AbstractBase {
public:
    // Pure virtual function
    virtual void show() = 0;

    void display() {
        cout << "This is a concrete method in the abstract class." << endl;
    }
};
class Derived : public AbstractBase {
public:
    //override keyword ensures that we are overriding a base class method(Optional in C++)

    void show() override{
        cout << "Implementation of the pure virtual function in the derived class." << endl;
    }
};

int main() {
    // AbstractBase obj; // Error: Cannot instantiate an abstract class
    Derived derivedObj;
    derivedObj.show();      // Calls the implemented pure virtual functionBb
    derivedObj.display();   // Calls the concrete method from the abstract class

    return 0;
}
