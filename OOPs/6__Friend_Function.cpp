#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b) : x(a), y(b) {}

    // Declare friend function
    friend double distance(Point p1, Point p2);
};

// Friend function (not a member of class, but can access private members)
double distance(Point p1, Point p2)
{
    int dx = p1.x - p2.x;
    int dy = p1.y - p2.y;
    return sqrt(dx * dx + dy * dy);
}

int main()
{
    Point p1(3, 9), p2(6, 8);
    cout << "Distance between points = " << distance(p1, p2) << endl;
    return 0;
}
