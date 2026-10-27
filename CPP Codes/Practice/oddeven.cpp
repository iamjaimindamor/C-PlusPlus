#include <iostream>
using namespace std;

int main(){

    int num;

    cout << "Enter a number : ";
    cin >> num;
    cout<<endl;

    if(num%2==0){
        cout << "Given Value is Even Number.";
    }else{
        cout << "Value given is Odd number.";
    }

    return 0;

}