#include <iostream>
using namespace std;

class Complex
{
    int real;
    int imag;

public:
    // Constructor
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // Function to add two Complex numbers (takes object as argument)
    Complex add(Complex c)
    {
        Complex temp;
        temp.real = real + c.real; // current object + passed object
        temp.imag = imag + c.imag;
        return temp;
    }

    // Display function
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(3, 4); // 3 + 4i
    Complex c2(5, 7); // 5 + 7i

    cout << "First Complex number: ";
    c1.display();

    cout << "Second Complex number: ";
    c2.display();

    // Add using object as argument
    Complex result = c1.add(c2);

    cout << "Sum of complex numbers: ";
    result.display();

    return 0;
}

