#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number to start the countdown from : ";
    cin>>num;

    for(int i=num; i>0; i--){
        cout<<i<<endl;
    }
    return 0;
}