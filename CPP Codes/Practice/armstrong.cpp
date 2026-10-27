#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int num,sum=0,digit=0;
    int test1 = 0;
    int test2 = 0;
    cout << "Enter any number to check for armstrong number : ";
    cin >> num;
    test1=num;
    test2=num;

    while(test1>0){
        digit++;
        test1 /=10; 
    }

    for(int i = 1; i<=digit;i++){
        sum = sum + pow((test2%10),digit);
        test2 /= 10;
    }

    if(sum == num){
        cout << "Its an Armstrong Number";
    }else{
        cout << "Its not an Armstrong Number";
    }

    return 0;
}