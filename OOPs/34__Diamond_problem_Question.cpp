#include<iostream>
using namespace std;

class person{
    public:
    string name;
    int code;
};

class account: virtual public person{
    public:
    int pay;
};
class admin: virtual public person{
    public:
    int experience;
};
class employee: public account, public admin{
    public:
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Code: "<<code<<endl;
        cout<<"Pay: "<<pay<<endl;
        cout<<"Experience: "<<experience<<endl;
    }
    void create(){
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Code: ";
        cin>>code;
        cout<<"Enter Pay: ";
        cin>>pay;
        cout<<"Enter Experience: ";
        cin>>experience;

    }
    void update(){
        cout<<"Update Pay: ";
        cin>>pay;
        cout<<"Update Experience: ";
        cin>>experience;
    }
};
int main(){
    employee emp;
    emp.create();
    emp.display();
    emp.update();
    emp.display();
    return 0;
}