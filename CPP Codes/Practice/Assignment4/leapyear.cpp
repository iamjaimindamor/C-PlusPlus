#include<iostream>
using namespace std;

int main(){
    int year;
    cout << "Enter a year : ";
    cin>>year;

    //first check if its a century year
    if(year%100==0){
        if(year%400==0){
            cout << "Its a Leap Year , in fact its century leap year.";
        }else{
            cout << "Not a Leap year";
        }
    }else if(year%4==0){

        cout << "Its a leap year";

    }else{
        cout << "Not a Leap Year";
    }
    return 0;
}