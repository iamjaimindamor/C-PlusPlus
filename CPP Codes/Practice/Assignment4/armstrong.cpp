#include <iostream>
using namespace std;

int main(){

    int num;
    int test,first,sec,last;
    cout << "Enter any 3 digit number : " ;
    cin>>num;
    if(num<99 || num>999){
        cout<<"Invalid Input number must be of three digits only";
    }else{
        test =num;
        last = test%10;
        test /= 10;
        sec = test%10;
        test /= 10;
        first = test%10;

       bool isArmstrong = ((first*first*first)+(sec*sec*sec)+(last*last*last)) == num ?true:false;
       
       if(isArmstrong){
        cout << "Its an Armstrong Number";

       }else{
        cout << "Its not an Armstrong Number";
       }
       
    }



    return 0;
}