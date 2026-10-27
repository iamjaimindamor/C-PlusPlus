#include <iostream>
using namespace std;

int main(){

    int num; 
    int first = 0 , second = 1;
    cout << "Enter the number of length of Fibonacci Series to print : ";
    cin>>num;

    cout << first << " " << second << " ";

    for(int i=2; i<num; i++){
        int third = first + second;
        cout << third << " ";
        first = second;
        second = third;
    }

 

    return 0;
}