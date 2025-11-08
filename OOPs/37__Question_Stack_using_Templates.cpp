//Question: Implement a stack data structure using templates in C++. The stack should support basic operations like push, pop, and top. Demonstrate the stack with different data types (e.g., int, string).
#include <iostream>
using namespace std;

template <typename T>
class Stack
{
    T *arr;
    int topIndex;
    int capacity;

public:
    Stack(int size = 10)
    {
        capacity = size;
        arr = new T[capacity];
        topIndex = -1;
    }

    ~Stack()
    {
        delete[] arr;
    }

    void push(const T &data)
    {
        if (topIndex == capacity - 1)
        {
            cout << "Stack overflow" << endl;
            return;
        }
        arr[++topIndex] = data;
    }

    void pop()
    {
        if (topIndex == -1)
        {
            cout << "Stack underflow" << endl;
            return;
        }
        topIndex--;
    }

    T top() const
    {
        if (topIndex == -1)
        {
            cout << "Stack is Empty" << endl;
        }
        return arr[topIndex];
    }
};

int main()
{
    Stack<int> is(5);

    is.push(1);
    is.push(2);
    is.push(3);
    is.push(4);
    is.push(5);

    cout << "Top of integer stack is " << is.top() << endl;

    is.pop();
    cout << "Top of integer stack is " << is.top() << endl;

    Stack<string> ss;
    ss.push("KeyBoard");
    ss.push("Monitor");
    ss.push("Box");
    ss.push("Camera");
    cout << "Top of String Stack is " << ss.top() << endl;
    ss.pop();
    cout << "Top of String Stack is " << ss.top() << endl;

    return 0;
}