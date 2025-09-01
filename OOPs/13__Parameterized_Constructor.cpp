#include <iostream>
using namespace std;

// Parameterized Constructor
class rectangle
{
    int len, wid;

public:
    rectangle() : len(0), wid(0) {} // Default constructor

    rectangle(int l, int w)
    { // Parameterized constructor
        len = l;
        wid = w;
    }

    void area()
    {
        cout << "Area is " << len * wid << endl;
    }
};

int main()
{
    rectangle rect1;
    cout << "1. Using Default Constructor" << endl;
    rect1.area();

    rectangle rect2(12, 89);
    cout << "2. Using Parameterized Constructor" << endl;
    rect2.area();

    return 0;
}
