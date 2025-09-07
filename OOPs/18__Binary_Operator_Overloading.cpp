// Binary Operator Overloading
#include <iostream>
using namespace std;

class mat22
{
    int a11, a12, a21, a22;

public:
    mat22() : a11(1), a12(2), a21(3), a22(4) {}

    void show()
    {
        cout << "The Matrix is:" << endl;
        cout << a11 << " " << a12 << endl;
        cout << a21 << " " << a22 << endl;
    }

    mat22 operator+(mat22 x)
    {
        mat22 temp;
        temp.a11 = a11 + x.a11;
        temp.a12 = a12 + x.a12;
        temp.a21 = a21 + x.a21;
        temp.a22 = a22 + x.a22;
        return temp;
    }
};

int main()
{
    mat22 a, b, c;
    a.show();
    b.show();
    c = a + b;
    c.show();
    return 0;
}
