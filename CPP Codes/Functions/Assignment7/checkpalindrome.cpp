#include <iostream>
using namespace std;


bool isPalindrome (int num){

    int value = num;
    int reverseValue=0;

    //reverse a string;

    while(num>0){
        int lastDigit = num%10;
        reverseValue = reverseValue*10 + lastDigit;
        num/=10;
    }
    if(value == reverseValue){
        return true;
    }else{
        return false;
    }
}


int main(){

   cout << isPalindrome(123);

    return 0;
}