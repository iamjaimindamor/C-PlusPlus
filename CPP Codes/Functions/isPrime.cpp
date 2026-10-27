#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n==1){
        return false;
    }

    for(int i =2; i<= n-1;i++){
        if(n%i == 0){
            return false;
        }
    }

    return true;
}

bool isPrime2(int n){
    if(n==1){
        return false;
    }

    // 2 to sqrt(n);
    for(int j=2;j*j<=n;j++){
        if(n%j==0){
            return false;
        }
    }

    return true;
}

int main(){
    
    cout << isPrime2(5);
    return 0;
}