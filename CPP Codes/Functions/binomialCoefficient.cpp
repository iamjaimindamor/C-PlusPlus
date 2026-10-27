#include <iostream>
using namespace std;

int factorial(int num){
    int fact =1;

    while(num>0){
        fact*=num;
        num--;
    }

    return fact;
}

int nCr (int n , int r){

    int val1 = factorial(n);
    int val2 = factorial(r);
    int val3 = factorial(n-r);

    int result = val1 / (val2*val3);

}


int main(){
cout << nCr(3,2);
    return 0;
}