#include<iostream>
using namespace std;

bool isOdd(int num){

    if((num&1)==0){
        cout << "even number"<<endl;
        return false;
    }else{
        cout << "odd number"<<endl;
        return true;
    }

}

int main(){
    isOdd(5);
    isOdd(4);
    isOdd(6);
    isOdd(7);

    return 0;

}