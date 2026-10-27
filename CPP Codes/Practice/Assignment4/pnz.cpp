#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number could be any integer : ";
    cin>>num;

    if(num==0){
        cout << "Entered Value is Zero";
    }else if(num>0){
        cout << "Entered Value is Positive";
    }else{
        cout << "Entered Value is Negative";
    }
    return 0;
}