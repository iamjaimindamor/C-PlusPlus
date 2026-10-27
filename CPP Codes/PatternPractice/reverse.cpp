#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter any number to reverse it : ";
    cin>>num;

    for(int i=num;i>0;i/=10){
        cout<<(i%10)<<" ";
    }
    return 0;
}