#include<iostream>
using namespace std;

int main(){

    int num,fact=1,val;                                         
    cout << "Enter a number to calculate its factorial : ";
    cin>> num;
    val=num;
    while(num>0){
        fact *= num;
        num--;
    }

    cout << "Factorial of "<<val<<" is : "<<fact;

    return 0;

}