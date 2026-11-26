#include<iostream>
using namespace std;

int pow (int x , int n){

    int ans = 1;

    while(n>0){

        int lastDigit = (n&1);

        if(lastDigit){
            ans=ans*x;
        }

        x=(x*x);

        n=n>>1;
    }

    return ans;

}

int main(){
    cout << pow(3,5);
    return 0;
}