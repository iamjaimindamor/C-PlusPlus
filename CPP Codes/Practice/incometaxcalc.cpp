#include <iostream>
using namespace std;

int main(){

    int income;
    cout << "Enter Your Income To Fetch Your Taxable Amount: ";
    cin>>income;

    if(income<500000){
        cout << "Your Taxable Amount is 0";
    }else if(income<=1000000){
        cout << "Taxable Amount is : "<< income*0.20 << "." << "As Per 20% Rate for income bracket of 5Lacs-10Lacs";
    }else{
        cout << "Taxable Amount is : "<< income*0.30 << "." << "As Per 30% Rate for income above 10Lacs.";

    }

    
    return 0;

}