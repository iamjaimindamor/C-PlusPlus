#include<iostream>
using namespace std;

int clearBits(int num,int i,int j){

    int val = 0;

    for(int p=i;p<=j;p++){
        val=(val|(1<<p));
    }
    num=(num&(~val));

    return num;
    
}

int main(){

     clearBits(15,1,3);
    cout << clearBits(31,1,3) << endl;

    return 0;

}