#include <iostream>
using namespace std;

int main(){

    int a,b;

    cout << "Enter value for a : " ;
    cin>>a;
    cout << "\n" << "Enter value for b : ";
    cin>>b;

    if(a>b){
        cout << "a is greater than b.";
    }else{
        cout << "b is greater than a.";
    }
    return 0;
}