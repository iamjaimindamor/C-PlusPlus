#include <iostream>
using namespace std;

int largestOfThree(int a,int b,int c){

if((a>=b)&&(a>=c)){
    return a;
}else if(b>=a){
    return b;
}else{
    return c;
}

}

int main(){

    cout << "Largest Values is : "<<largestOfThree(2112,232,12100);

    return 0;
}