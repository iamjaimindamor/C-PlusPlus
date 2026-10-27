#include <iostream>
using namespace std;

bool isPrime(int n){

    if(n==1){
        return false;
    }

    for(int i=2; i*i<=n;i++){
        if(n%i == 0){
            return false;
        }
    }

    return true;
}

void allPrimes(int n){
  for(int j = 2; j<=n; j++){
        if(isPrime(j)){
            cout << j << endl;
        }
    }
}


int main (){
    int n;
    cout << "Enter a number range and see all prime within that range starting from 2 : ";
    cin >> n;
    allPrimes(n);

    return 0;
}