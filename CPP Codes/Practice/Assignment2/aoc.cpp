#include<iostream>
#define PI 3.14
using namespace std;

int main(){
    float area,r;
    cout<<"Enter Radius of Circle to eval its area : ";
    cin>>r;
    area = PI*r*r;
    cout<<"\n"<<"Area of circle is : "<<area;
    return 0;
}