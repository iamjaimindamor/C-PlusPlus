#include<iostream>
using namespace std;

int sumOfNNaturalNumber(int n){

    if(n==0){
        return 0;
    }

   return n + sumOfNNaturalNumber(n-1);

};

int main(){
    cout << "Sum : " << sumOfNNaturalNumber(5) << endl; 
    return 0;
}