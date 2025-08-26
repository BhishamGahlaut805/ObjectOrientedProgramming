#include <iostream>
using namespace std;

class Numbers
{
    int a, b;

public:
    Numbers(int x, int y)
    {
        a = x;
        b = y;
    }

    // Declare another class as friend
    friend class MathOperations;
};

class MathOperations
{
public:
    int findSum(Numbers n)
    {
        return n.a + n.b; // Accessing private members
    }

    double findAverage(Numbers n)
    {
        return (n.a + n.b) / 2.0;
    }
};

int main()
{
    Numbers n1(10, 20);
    MathOperations m;

    cout << "Sum = " << m.findSum(n1) << endl;
    cout << "Average = " << m.findAverage(n1) << endl;

    return 0;
}
