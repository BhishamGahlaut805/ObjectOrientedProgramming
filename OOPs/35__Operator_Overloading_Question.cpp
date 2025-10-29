#include<iostream>
using namespace std;

class FLOAT{
    float x;
    public:
    FLOAT(){}
    FLOAT(float a){
        x=a;
    }
    // Overloading + operator to add two FLOAT objects
    FLOAT operator + (FLOAT &obj){
        return FLOAT(this->x + obj.x);
    }
    FLOAT operator - (FLOAT &obj){
        return FLOAT(x - obj.x);
    }
    FLOAT operator * (FLOAT &obj){
        return FLOAT(this->x * obj.x);
    }
    FLOAT operator / (FLOAT &obj){
        if(obj.x==0){
            cout<<"Division by zero error!"<<endl;
            return FLOAT(0);
        }
        return FLOAT(this->x / obj.x);
    }
    void display(){
        cout<<"Value: "<<x<<endl;
    }
};
int main(){
    FLOAT f1(10.5), f2(2.5);
    FLOAT f3;

    f3 = f1 + f2;
    cout<<"Addition: ";
    f3.display();

    f3 = f1 - f2;
    cout<<"Subtraction: ";
    f3.display();

    f3 = f1 * f2;
    cout<<"Multiplication: ";
    f3.display();

    f3 = f1 / f2;
    cout<<"Division: ";
    f3.display();

    return 0;

}