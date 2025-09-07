// Unary Operator Overloading with Friend Function
#include <iostream>
#include <vector>
using namespace std;

class test
{
    vector<int> x;

public:
    test(initializer_list<int> y)
    {
        for (auto val : y)
        {
            x.push_back(val);
        }
    }

    void show()
    {
        for (int i = 0; i < x.size(); i++)
        {
            cout << x[i] << " ";
        }
        cout << endl;
    }

    friend void operator~(test &t);
};

void operator~(test &t)
{
    for (int i = 0; i < t.x.size(); i++)
    {
        t.x[i] = -t.x[i];
    }
}

int main()
{
    test t{12, 13, 14, 15, 16, 17, 18, 19, 20};
    t.show();
    ~t;
    t.show();
    return 0;
}
