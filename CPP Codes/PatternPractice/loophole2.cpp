#include <iostream>
using namespace std;

int main(){

    int num;
    cout << "enter a number : ";
    cin>>num;

    while(num>=0 || num<0){

        cout << "enter a number : ";
        cin >> num;

        if(num%10==0){
            break;
        }

    }
        cout << "Great! You Found a Loophole. ";


    return 0;
}