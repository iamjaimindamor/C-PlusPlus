#include <iostream>
using namespace std;

int main(){
    int num;
    do{
        cout << "Enter a number : ";
        cin>>num;
    }while((num%10)!=0);
            cout << "Great! You Found a Loophole. ";

    return 0;
}