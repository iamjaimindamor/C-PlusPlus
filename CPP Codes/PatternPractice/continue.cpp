#include <iostream>
using namespace std;

int main(){

    int num;
    do{

        cout<<"enter a number : ";
        cin>>num;
        if(num%10==0){
            continue;
        }
        cout<<"You entered "<<num<<endl;

    }while(true);
    return 0;
}