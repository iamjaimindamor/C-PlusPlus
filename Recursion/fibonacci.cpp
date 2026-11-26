#include<iostream>
using namespace std;

int fibonacci(int n){
    cout <<n<<"";
    if(n==0||n==1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}


int main(){
    fibonacci(5);
    return 0;
}