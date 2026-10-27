#include<iostream>
using namespace std;

int main(){
    float p,r,t;
    float si;
    cout<<"Enter Principal Amount P : ";
    cin>>p;
    cout<<"Enter Rate R : ";
    cin>>r;
    cout<<"Enter Time T : ";
    cin>>t;
    cout<<"\n";
    si = (p*r*t)/100;
    cout<<"Your Simple Interest is "<<si<<"\n";

    return 0;
}