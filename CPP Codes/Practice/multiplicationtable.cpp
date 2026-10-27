#include<iostream>

using namespace std;

int main(){
    int val;

    cout<<"Enter a number to see its multiplication table : ";
    cin>>val;

    for(int i =1; i<11;i++){
        cout << val<<" x "<<i<<" = " <<(val*i) <<endl;
    }

    return 0;
}