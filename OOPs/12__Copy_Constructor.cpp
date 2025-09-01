#include <iostream>
using namespace std;

// Copy Constructor
class Book
{
    string title;
    int pages;

public:
    Book(string t, int p) : title(t), pages(p) {}

    // Copy Constructor
    Book(Book &b)
    {
        cout << "Copy Constructor Called" << endl;
        title = b.title;
        pages = b.pages;
    }

    void show()
    {
        cout << "Title is : " << title << " AND Number of Pages are : " << pages << endl;
    }
};

int main()
{
    Book a("Data Structures", 1299);
    a.show();

    Book b = a; // Copy constructor called
    b.show();

    Book c("ABC", 123);
    c.show();

    Book d(c); // Copy constructor called
    d.show();

    c = b; // Assignment operator (NOT copy constructor)
    c.show();

    return 0;
}
