#include <iostream>
using namespace std;

class Student
{
    string name;
    int roll;

public:
    void setData(string n, int r)
    {
        name = n;
        roll = r;
    }

    void display()
    {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }
};

int main()
{
    // Array of 3 Student objects
    Student s[3];

    // Set data for each student
    s[0].setData("Amit", 1);
    s[1].setData("Bhisham", 2);
    s[2].setData("Riya", 3);

    // Display all students
    for (int i = 0; i < 3; i++)
    {
        s[i].display();
    }

    return 0;
}
