// Pointers for Resolving Ambiguity
#include <iostream>
using namespace std;

// Resolve ambiguity using pointers

class Base
{
public:
    int b;
    void show()
    {
        cout << "B is : " << b << endl;
    }
};

class Derived : public Base
{
public:
    int d;
    void show()
    {
        cout << "B is : " << b << endl;
        cout << "D is : " << d << endl;
    }
};

int main()
{
    cout << "----1. Base pointer to Base object----" << endl;
    Base *bptr;
    Base b;
    bptr = &b;
    bptr->b = 100;
    bptr->show(); // Output: B is : 100

    cout << "----2. Base pointer to Derived object-----" << endl;
    Derived d;
    bptr = &d;
    bptr->b = 200;
    bptr->show(); // Output: B is : 200 (calls Base::show because Base pointer)

    cout << "----3. Derived pointer to Derived object (full access)----" << endl;
    Derived *dptr;
    dptr = &d;
    dptr->d = 300;
    dptr->show(); // Output: B is : 200
                  //         D is : 300

    cout << "-----4. Typecasting Base pointer to Derived pointer to access derived members-----" << endl;
    ((Derived *)bptr)->d = 400;
    ((Derived *)bptr)->show(); // Output: B is : 200
                               //         D is : 400

    return 0;
}