#include<iostream>
using namespace std;

int main(){
    int a,b,c;

    cout << "Enter value for a : ";
    cin>> a;
    cout << "\n" << "Enter value for b : ";
    cin>> b;
    cout << "\n" << "Enter value for c : ";
    cin>> c;

    if(a<=b){
        if(b<c){

            cout << "c is largest of three";

        }else{
            cout << "b is largest of three";

        }
    }else{
        if(c<a){
            cout << "a is largest of three";

        }else{
            cout << "c is largest of three";

        }
    }

    if(a>=b && a>= c){

        cout << "A is largest of three";

    }else if(b>=c){

        cout << "B is largest of three";

    }else{
        cout << "C is largest of three";

    }

    return 0;
}