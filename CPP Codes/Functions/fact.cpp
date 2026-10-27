#include <iostream>
using namespace std;

//forward declaration 
int factorial(int num);

int main(){

    cout << factorial(0);


    return 0;
}

int factorial(int num){

    int fact = 1;

    while(num>0){
        // fact = fact*num;
        fact*=num;
        num --;
    }

    return fact;
}