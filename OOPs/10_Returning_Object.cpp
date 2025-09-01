#include <iostream>
using namespace std;

// Returning object
class Vector
{
    int x, y, z;

public:
    Vector(int a = 0, int b = 0, int c = 0) : x(a), y(b), z(c) {}

    Vector add(Vector b);

    void show()
    {
        cout << "Vector is : " << x << "i + " << y << "j + " << z << "k" << endl;
    }
};

Vector Vector::add(Vector b)
{
    Vector res;
    res.x = x + b.x;
    res.y = y + b.y;
    res.z = z + b.z;
    return res;
}

int main()
{
    Vector a(1, 2, 3);
    Vector b(4, 5, 6);
    Vector c = a.add(b);
    c.show();

    return 0;
}
