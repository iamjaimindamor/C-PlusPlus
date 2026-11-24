#include<iostream>
using namespace std;

int countSetBit(int num){

    // 0111
    int count=0;

    while(num>0){

        if((num&1)){
            count++;
        }   
        num=num>>1;
    }

    return count;
}

int main(){

    cout << countSetBit(7);
    
    return 0;
}