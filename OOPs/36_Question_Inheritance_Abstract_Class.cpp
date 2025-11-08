//Question: Create an abstract class 'shape' with a pure virtual function 'area()'. Derive classes 'Rectangle', 'Triangle', and 'Circle' from 'shape' and implement the 'area()' function in each derived class. Additionally, create a derived class 'RandomShape' that inherits from both 'Rectangle' and 'Circle' to demonstrate hybrid inheritance. Use runtime polymorphism to calculate and display the area of each shape.
#include <iostream>
#include <cmath>
using namespace std;

// Base abstract class
class shape
{
public:
    virtual void area() = 0; // Pure virtual function
    // virtual ~shape() {}      //virtual destructor
};

// Virtual inheritance to avoid ambiguity in hybrid inheritance
class Polygon : public virtual shape
{
public:
    int s1, s2;
};

// Rectangle derived from Polygon
class Rectangle : public Polygon
{
public:
    Rectangle(int a, int b)
    {
        s1 = a;
        s2 = b;
    }
    void area() override
    {
        int ar = s1 * s2;
        cout << "Area of Rectangle: " << ar << endl;
    }
};

// Triangle derived from Polygon
class Triangle : public Polygon
{
    int s3;

public:
    Triangle(int a, int b, int c)
    {
        s1 = a;
        s2 = b;
        s3 = c;
    }
    void area() override
    {
        float s = (s1 + s2 + s3) / 2.0;
        float ar = sqrt(s * (s - s1) * (s - s2) * (s - s3));
        cout << "Area of Triangle: " << ar << endl;
    }
};

// Circle derived directly from shape
class Circle : virtual public shape
{
    int r;

public:
    Circle(int radius) { r = radius; }
    void area() override
    {
        cout << "Area of Circle: " << 3.14 * r * r << endl;
    }
};

// Derived hybrid class combining multiple inheritance
class RandomShape : public Rectangle, public Circle
{
public:
    RandomShape(int l, int b, int r)
        : Rectangle(l, b), Circle(r) {}
    void area() override
    {
        cout << "--- Random Shape ---" << endl;
        Rectangle::area();
        Circle::area();
    }
};

// Main function demonstrating runtime polymorphism
int main()
{
    shape *ptr; // Base class pointer

    Rectangle r(10, 5);
    Triangle t(3, 4, 5);
    Circle c(7);
    RandomShape rs(5, 4, 3);

    ptr = &r;
    ptr->area(); // Rectangle area

    ptr = &t;
    ptr->area(); // Triangle area

    ptr = &c;
    ptr->area(); // Circle area

    ptr = &rs;
    ptr->area(); // Random shape (hybrid inheritance demonstration)

    return 0;
}