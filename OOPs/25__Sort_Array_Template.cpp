#include <iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

template<class T>
class sortArray
{
    vector<T>arr;
    public:
    sortArray(vector<T>&data){
        arr=data;
    }
   static bool cmp(pair<T,int>&a,pair<T,int>&b){
    if(a.second!=b.second){
        return a.second<b.second;
    }
    return a.first<b.first;
}
    void sort1(){
    unordered_map<T,int>mp;
    for(T &i:arr){
        mp[i]++;
    }
    vector<pair<T,int>>freq(mp.begin(),mp.end());
    sort(freq.begin(),freq.end(),cmp);
    arr.clear();

    for(auto &p:freq){
        for(int i=0;i<p.second;i++){
            arr.push_back(p.first);
        }
    }
}
void display(){
     for(T &i:arr){
       cout<<i<<" ";
   }
}
};
int main() {
     vector<int>arr={2,3,4,1,2,3,4,4,2,6,7,5,8,4,8,6,3,2,6,3,2,3};
    sortArray<int> sa(arr);
    sa.sort1();
    sa.display();
    cout<<endl;

    vector<char>arr1={'a','d','r','t','t','d'};
    sortArray<char> sa1(arr1);
    sa1.sort1();
    sa1.display();
    cout<<endl;

    vector<string>arr2={"Jaypee","Bhisham","Harman","Jaypee","Jaypee","Harman","Bikram","Jaypee","Harman","Jaypee"};
    sortArray<string> sa2(arr2);
    sa2.sort1();
    sa2.display();
    cout<<endl;

    vector<double>arr3={2.002,2.001,3.564,3.564,8.123,8.123,8.123,8.123,9.222,9.222,18.34};
    sortArray<double> sa3(arr3);
    sa3.sort1();
    sa3.display();
    cout<<endl;

    return 0;
}