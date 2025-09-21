#include<iostream>
using namespace std;

// Template is a feature of C++ that allows us to write generic and reusable code.
// It enables us to create functions and classes that can work with different data types without duplicating code.

template <class T>
T add(T a, T b) {
    return a + b;
}

//Template on a Class
template <typename T>

class Box {
private:

    T value;
public:
    Box(T v) : value(v) {}

    T getValue() {
        return value;
    }
};


int main() {
    cout << "Integer addition: " << add(5, 10) << endl;
    cout << "Double addition: " << add(5.5, 10.5) << endl;
    cout << "String addition: " << add(string("Hello, "), string("World!")) << endl;

    Box<int> intBox(123);
    Box<string> strBox("Template in C++");
    cout << "Integer Box value: " << intBox.getValue() << endl;
    cout << "String Box value: " << strBox.getValue() << endl;

    return 0;
}