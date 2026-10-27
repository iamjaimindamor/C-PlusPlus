#include <iostream>
using namespace std;

int main(){

    int num;
    cout << "Enter number between 1 to 9 you want rows and cols: ";
    cin>> num;


    if(num>9||num<0){
        cout << "Invalid Input";
        return 400;
    }

    for(int i=1; i<=num;i++){

        for(int j=1;j<=num;j++){

            cout << i << " ";

        }
            cout << "\n";

    }

    return 0;
}