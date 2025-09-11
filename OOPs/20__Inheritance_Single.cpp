#include<iostream>
using namespace std;

//Program to demonstrate Single Inheritance in C++
//Single Inheritance: When a class is derived from another class, it is known as single inheritance.
class Car{  //Base Class
    int data;
    public:
        Car(int d):data(d){}
        void name(){
            cout<<"Car name"<<endl;
        }
        void showData(){
            cout<<"Car Data: "<<data<<endl;
        }
};
class BMW: public Car{  //Derived Class
    public:
        BMW(int d):Car(d){}
        void showData(){
            Car::showData();
        }
        void honk(){
            cout<<"BMW honks"<<endl;
        }
};
int main(){
    BMW d(5);  //Creating object of derived class
    d.name();  //Calling base class method
    d.honk();   //Calling derived class method
    d.showData();
    return 0;
}