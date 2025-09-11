#include<iostream>
using namespace std;

//WAP to show Multiple Inheritance in... example using public,protected and private access specifier.
//Multiple Inheritance: When a class is derived from more than one base class, it is called Multiple Inheritance.
class A{  //Base Class 1
    int a;
    protected:
        int b;
    public:
        int c;
        A(int x, int y, int z):a(x),b(y),c(z){}
        void showA(){
            cout<<"a: "<<a<<endl;
            cout<<"b: "<<b<<endl;
            cout<<"c: "<<c<<endl;
        }
};
class B{  //Base Class 2
    int d;
    protected:
        int e;
    public:
        int f;
        B(int x, int y, int z):d(x),e(y),f(z){}
        void showB(){
            cout<<"d: "<<d<<endl;
            cout<<"e: "<<e<<endl;
            cout<<"f: "<<f<<endl;
        }
};
class C: public A, private B{  //Derived Class
    public:
        C(int x, int y, int z, int w, int v, int u):A(x,y,z),B(w,v,u){}
        void showC(){
            A::showA();
            B::showB();
        }
};
int main(){
    C obj(1,2,3,4,5,6);
    obj.showC();
  //  obj.showB();    //inaccessible as showB is Private
    return 0;
}