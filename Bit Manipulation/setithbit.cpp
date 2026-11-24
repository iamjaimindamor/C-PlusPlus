#include<iostream>
using namespace std;

int setIthBit(int num,int i){
    return (num|(1<<i));
}

int main(){
cout << setIthBit(4,1)<<endl;

    return 0;
}