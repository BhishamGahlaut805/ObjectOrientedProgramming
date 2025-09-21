// Diamond Problem-Virtual Inheritance
#include <iostream>
using namespace std;

// Base class
class Athlete
{
public:
    string name;
    void showName()
    {
        cout << "The Name of Athlete is : " << name << endl;
    }
};

// Virtual inheritance ensures only one Athlete instance exists
class Runner : virtual public Athlete
{
public:
    void showSport()
    {
        cout << "My Sport Name is Marathon Running" << endl;
    }
};

class Diet : virtual public Athlete
{
public:
    void showDiet()
    {
        cout << "I am Having a Healthy Vegetarian Diet" << endl;
    }
};

// WinStrategy inherits from Runner and Diet (both virtually inherited Athlete)
class WinStrategy : public Runner, public Diet
{
public:
    void showStrategy()
    {
        cout << "My Winning Strategy is Running + Diet" << endl;
    }
};

int main()
{
    WinStrategy ws;

    // No ambiguity here! Only one Athlete::name exists
    ws.name = "Harman";
    ws.showName();

    ws.showSport();
    ws.showDiet();
    ws.showStrategy();

    return 0;
}