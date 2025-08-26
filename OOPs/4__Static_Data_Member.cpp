#include <iostream>
using namespace std;

class Counter
{
    static int value; // only ONE copy shared by all objects
public:
    void increment(int x)
    {
        value += x;
        cout << "Value after incrementing by " << x << " = " << value << endl;
    }

    void decrement(int x)
    {
        value -= x;
        cout << "Value after decrementing by " << x << " = " << value << endl;
    }

    void show()
    {
        cout << "Current value = " << value << endl;
    }
};

// Define and initialize static data member
int Counter::value = 0;

int main()
{
    Counter c1, c2;

    c1.increment(5);  // value = 5
    c2.increment(10); // value = 15 (shared across objects)

    c1.decrement(3); // value = 12
    c2.show();       // shows 12, even though using c2

    c1.increment(7); // value = 19
    c2.show();       // still 19 (shared memory)

    return 0;
}
