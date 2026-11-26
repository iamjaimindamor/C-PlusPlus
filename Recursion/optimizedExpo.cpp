#include<iostream>
using namespace std;

int pow(int x , int n){

    if(n==0){
        return 1;
    }

    int halfPower = pow(x,n/2);
    int halfPowerSquared = halfPower*halfPower;

    if(n%2!=0){
        return x*halfPowerSquared;
    }
    return halfPowerSquared;
}

int main(){
    pow(2,10);
    return 0;
}