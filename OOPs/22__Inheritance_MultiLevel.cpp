#include<iostream>
using namespace std;

class Earth{
    public:
        int population;
        int area;
        int country;
        Earth(int p, int a, int c):population(p),area(a),country(c){}
};

class Asia: public Earth{
    public:
        int language;
        int religion;
        int culture;
        Asia(int p, int a, int c, int l, int r, int cu)
        : Earth(p,a,c),language(l),religion(r),culture(cu){}
};

class India: public Asia{
    public:
        int state;
        int city;
        int village;
        India(int p, int a, int c, int l, int r, int cu, int s, int ci, int v)
        : Asia(p,a,c,l,r,cu),state(s),city(ci),village(v){}
};

int main(){
    India obj(1,2,3,4,5,6,7,8,9);

    // Direct access (no show functions)
    cout<<"Population: "<<obj.population<<endl;
    cout<<"Area: "<<obj.area<<endl;
    cout<<"Country: "<<obj.country<<endl;
    cout<<"Language: "<<obj.language<<endl;
    cout<<"Religion: "<<obj.religion<<endl;
    cout<<"Culture: "<<obj.culture<<endl;
    cout<<"State: "<<obj.state<<endl;
    cout<<"City: "<<obj.city<<endl;
    cout<<"Village: "<<obj.village<<endl;

    return 0;
}
