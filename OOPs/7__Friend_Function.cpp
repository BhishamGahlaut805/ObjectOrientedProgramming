#include <iostream>
#include <cmath>
using namespace std;

class Principal;
class Rate;

class Principal
{
    double amount;

public:
    Principal(double a) : amount(a) {}
    friend double compoundInterest(Principal p, Rate r, int time);
};

class Rate
{
    double rate;

public:
    Rate(double r) : rate(r) {}
    friend double compoundInterest(Principal p, Rate r, int time);
};

// Friend function shared by both classes
double compoundInterest(Principal p, Rate r, int time)
{
    return p.amount * pow((1 + r.rate / 100), time);
}

int main()
{
    Principal p(1000); // principal = 1000
    Rate r(5);         // rate = 5%

    int time = 3; // 3 years
    double ci = compoundInterest(p, r, time);

    cout << "Compound Interest after " << time << " years = " << ci << endl;
    return 0;
}
