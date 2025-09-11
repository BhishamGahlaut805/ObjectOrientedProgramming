#include<iostream>
using namespace std;

//Program to demonstrate Hierarchical Inheritance
//Hierarchical Inheritance: When more than one class is derived from a single base class, it is called Hierarchical Inheritance.

class Vector
{
    int x, y;
    public:
        Vector(int a, int b):x(a),y(b){}
        void showVector(){
            cout<<"X: "<<x<<endl;
            cout<<"Y: "<<y<<endl;
        }
};

class Point2D: private Vector
{
    public:
        Point2D(int a, int b):Vector(a,b){}
        void showPoint2D(){
            cout<<"2D Point: ";
            showVector();
        }
};

class Point3D: public Vector
{
    int z;
    public:
        Point3D(int a, int b, int c):Vector(a,b),z(c){}
        void showPoint3D(){
            cout<<"3D Point: ";
            showVector();
            cout<<"Z: "<<z<<endl;
        }
};

int main(){
    Point2D p2d(1,2);
    p2d.showPoint2D();
    Point3D p3d(3,4,5);
    p3d.showPoint3D();
    return 0;
}
