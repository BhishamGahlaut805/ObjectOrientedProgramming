#include <iostream>
using namespace std;

// Default Constructor
class construct
{
    int x, y, z;

public:
    construct()
    {
        x = 0;
        y = 0;
        z = 0;
    }

    void show()
    {
        cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    }

    void assign(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
};

int main()
{
    construct num;
    num.show();

    cout << "After Assigning some values : " << endl;
    num.assign(19878, 9890, 9800);
    num.show();

    return 0;
}
