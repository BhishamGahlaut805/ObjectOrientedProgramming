#include<iostream>
using namespace std;

class A{
    public:
    int a;
    int b;
   A():a(1),b(2){}
};
class B:virtual public A{
    public:
    int c;
    int d;
    B():c(3),d(4){}
};
class C:virtual public A{
    public:
    int e;
    int f;
    C():e(5),f(6){}
};
class D:virtual public A{
    public:
    int g;
    int h;
    D():g(7),h(8){}
};

class E:public B,public C,public D{
    public:
    int i;
    int j;
    E():i(9),j(10){}
};

int main()
{
    E obj;
    cout<<obj.a<<endl;
    cout<<obj.b<<endl;
    cout<<obj.c<<endl;
    cout<<obj.d<<endl;
    cout<<obj.e<<endl;
    cout<<obj.f<<endl;
    cout<<obj.g<<endl;
    cout<<obj.h<<endl;
    cout<<obj.i<<endl;
    cout<<obj.j<<endl;

}