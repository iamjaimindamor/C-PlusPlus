#include<iostream>
using namespace std;

int friendsPairing(int n){
    
    if(n==1||n==2){
        return n;
    }

    //single
    int a1 = friendsPairing(n-1);
    int a2 = (n-1)*friendsPairing(n-2);

    return a1+a2;
}
int main(){
    cout << friendsPairing(4);
    return 0;
}