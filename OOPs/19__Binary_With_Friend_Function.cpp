// Binary Operator with Friend Function
#include <iostream>
using namespace std;

class space
{
    int x, y, z;

public:
    space() : x(1), y(2), z(3) {}

    void show()
    {
        cout << "x, y, z coordinates are = " << x << " " << y << " " << z << endl;
    }

    friend space operator*(space s, space t);
};

space operator*(space s, space t)
{
    space ans;
    ans.x = s.x * t.x;
    ans.y = s.y * t.y;
    ans.z = s.z * t.z;
    return ans;
}

int main()
{
    space t, s, z;
    t.show();
    s.show();
    z = s * t;
    z.show();
    return 0;
}
