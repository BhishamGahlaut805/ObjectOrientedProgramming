#include <iostream>
using namespace std;

// Dynamic Constructor
class Numbers
{
    int *arr;
    int size;

public:
    Numbers()
    {
        size = 0;
        arr = NULL;
        cout << "Calling Default Constructor" << endl;
    }

    Numbers(int n)
    {
        size = n;
        cout << "Calling Dynamic Constructor" << endl;
        arr = new int[size]; // Runtime allocation
        cout << "Enter Elements : ";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }

    void display()
    {
        cout << "Numbers are : ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Numbers n2;
    n2.display();

    Numbers n1(5);
    n1.display();

    return 0;
}
