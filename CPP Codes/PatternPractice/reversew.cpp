#include <iostream>
using namespace std;

int main(){
    int num;
    cout << " Enter any number to print in reverse : ";
    cin>> num;

    while(num!=0){
        cout << (num%10) << " ";
        num/=10;
    }
    cout<<endl;
    return 0;
}