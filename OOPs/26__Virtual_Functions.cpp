// Use of Virtual Function
#include <iostream>
using namespace std;
// Use of Virtual Function
class base
{
public:
    void show()
    {
        cout << "I am a Base Class" << endl;
    }
    virtual void display()
    {
        cout << "Base Class Display" << endl;
    }
};
class Derived : public base
{
public:
    void show()
    {
        cout << "I am a Derived Class" << endl;
    }
    void display()
    {
        cout << "Derived Class Display" << endl;
    }
};
int main()
{
    base b;
    Derived d;
    base *bptr;

    cout << "-------bptr pointing to Base-------" << endl;
    bptr = &b;
    bptr->display();
    bptr->show();

    cout << "------bptr pointing to Derived------" << endl;
    bptr = &d;
    bptr->display();
    bptr->show();

    return 0;
}