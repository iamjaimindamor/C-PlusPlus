#include<iostream>
using namespace std;

int getIthBit(int num,int i)
{
    return (num&(1<<i));
}
int main(){
    cout << getIthBit(5,2)<<endl;
    cout << getIthBit(7,1)<<endl;
    cout << getIthBit(8,0)<<endl;

    return 0;
}