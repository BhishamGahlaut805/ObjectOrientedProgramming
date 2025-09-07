// Unary Operator Overloading
#include <iostream>
using namespace std;

class vector3D
{
    int x, y, z;

public:
    vector3D(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }

    void show()
    {
        cout << "The Vector is: [" << x << "i " << y << "j " << z << "k]" << endl;
    }

    void operator&()
    { // example operator overloading
        x = -x;
        y = -y;
        z = -z;
    }
};

int main()
{
    vector3D v(2, 1, 3);
    v.show();
    &v; // calling overloaded operator
    v.show();
    return 0;
}
