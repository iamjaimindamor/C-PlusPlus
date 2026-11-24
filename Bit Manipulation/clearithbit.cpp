#include<iostream>
using namespace std;

void clearIthBit(int num,int i){
    cout << (num&~(1<<i));
}

int main(){
    clearIthBit(4,2);
    return 0;
}