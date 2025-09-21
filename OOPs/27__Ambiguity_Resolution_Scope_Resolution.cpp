// Scope Resolution
#include <iostream>
using namespace std;

class Teacher
{
public:
    void work()
    {
        cout << "Teaching Work" << endl;
    }

    void Role()
    {
        cout << "Student Career Development" << endl;
    }
};

class Doctor
{
public:
    void work()
    {
        cout << "Treatment Work" << endl;
    }

    void Role()
    {
        cout << "Saving Lives" << endl;
    }
};

// Inheriting from both Teacher and Doctor
class Professor : public Teacher, public Doctor
{
public:
    void myRoles()
    {
        // Work();  // Ambiguous — compiler error if you try this

        // Resolve ambiguity using scope resolution
        Teacher::work();
        Teacher::Role();

        Doctor::work();
        Doctor::Role();
    }
};

int main()
{
    Professor p;
    p.myRoles();

    return 0;
}