#include<iostream>
using namespace std;

int main(){

    int num,sum=0,test;
    cout << "Write Down any number : ";
    cin>>num;
    test=num;
    while(test!=0){
        if((test%10)%2!=0){
            sum+=test%10;
        }
        test/=10;
    }

    cout << "Sum Of Odd Digit Number in "<<num <<" is : "<<sum;

    return 0;
}