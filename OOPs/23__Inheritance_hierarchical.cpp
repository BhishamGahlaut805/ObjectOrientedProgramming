#include <iostream>
using namespace std;

// Base class
class Vector {
private:
    int x;        // Private: only accessible inside Vector
protected:
    int y;        // Protected: accessible in derived classes
public:
    int magnitude; // Public: accessible anywhere

    Vector(int a, int b, int m): x(a), y(b), magnitude(m) {}

    void showVector() {
        cout << "Private X: " << x << endl;
        cout << "Protected Y: " << y << endl;
        cout << "Public Magnitude: " << magnitude << endl;
    }
};

// Derived class 1 (Point2D)
class Point2D : private Vector {
public:
    Point2D(int a, int b, int m) : Vector(a, b, m) {}

    void showPoint2D() {
        cout << "2D Point (private inheritance):" << endl;
        // cout << x;   //Not accessible (private in base)
        // cout << y;   // Accessible (but becomes private due to private inheritance)
        // cout << magnitude; //Accessible (but becomes private in this class)
        showVector();
    }
};

// Derived class 2 (Point3D)
class Point3D : public Vector {
    int z;
public:
    Point3D(int a, int b, int m, int c) : Vector(a, b, m), z(c) {}

    void showPoint3D() {
        cout << "3D Point (public inheritance):" << endl;
        // cout << x;   //Not accessible (private in base)
        cout << "Accessing Protected Y directly: " << y << endl;  // Accessible
        cout << "Accessing Public Magnitude directly: " << magnitude << endl; // Accessible
        showVector();
        cout << "Z: " << z << endl;
    }
};

int main() {
    Point2D p2d(1, 2, 10);
    p2d.showPoint2D();

    Point3D p3d(3, 4, 20, 5);
    p3d.showPoint3D();

    cout << "\nAccessing from main(): " << endl;
    // cout << p2d.y;          //Error: y is private inside Point2D
    // cout << p2d.magnitude;  //Error: magnitude became private due to private inheritance
    // cout << p3d.y;          //Error: y is protected (not accessible outside)
    cout << "p3d.magnitude: " << p3d.magnitude << endl; //Accessible (public in Vector, stays public)

    return 0;
}
