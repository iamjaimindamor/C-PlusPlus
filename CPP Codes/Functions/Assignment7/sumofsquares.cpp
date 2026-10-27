#include <iostream>
using namespace std;


int sumOfSquares(int a,int b){
    return a*a+ b*b +2*a*b;
}

int main(){
   cout << sumOfSquares(5,6);
    return 0;
}