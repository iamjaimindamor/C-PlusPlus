#include <iostream>
using namespace std;

int main(){

    int caseNumber;
    int a,b;

    cout << "YOUR CALCULATOR" << endl;
    cout << "Select Operation You Want to perform (Enter a Number ) : " << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Division" << endl;
    cout << "4. Multiplication" << endl;
    cin>>caseNumber;
    cout<<endl;


    switch (caseNumber)
    {
        case 1:
            cout << "Great Lets Perform Addition" << endl;
                cout << "enter value for a : ";
    cin>> a;
    cout<<endl;
    cout << "enter value for b : ";
    cin>> b;
            cout << "a + b = "<<(a+b)<< endl;
            break;
        case 2:
            cout << "Great Lets Perform Subtraction" << endl;
                cout << "enter value for a : ";
    cin>> a;
    cout<<endl;
    cout << "enter value for b : ";
    cin>> b;
            cout << "a - b = "<<(a-b)<< endl;
            break;
        case 3:
            cout << "Great Lets Perform Division" << endl;
                cout << "enter value for a : ";
    cin>> a;
    cout<<endl;
    cout << "enter value for b : ";
    cin>> b;
            cout << "a / b = "<<((float)a/b)<< endl;
            break;
        case 4:
            cout << "Great Lets Perform Multiplication" << endl;
                cout << "enter value for a : ";
    cin>> a;
    cout<<endl;
    cout << "enter value for b : ";
    cin>> b;
            cout << "a X b = "<<(a*b)<< endl;
            break;
        default: cout << "Invalid Input.";
            break;
    }


}