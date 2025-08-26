#include <iostream>
using namespace std;

class Operation
{
public:
    // Overloaded functions with same name but different behavior
    void calculate(int a, int b)
    {
        cout << "Addition: " << (a + b) << endl;
    }

    void calculate(double a, double b)
    {
        cout << "Subtraction: " << (a - b) << endl;
    }

    void calculate(int a, int b, int c)
    {
        cout << "Multiplication: " << (a * b * c) << endl;
    }
};

int main()
{
    Operation op;

    op.calculate(10, 5);     // Addition
    op.calculate(10.5, 4.5); // Subtraction
    op.calculate(2, 3, 4);   // Multiplication

    return 0;
}

