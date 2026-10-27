#include <iostream>
using namespace std;

int main(){

    int num;

    cout << "Enter number of rows : ";
    cin >> num;

    int rows = num/2;

    for(int i=1; i<=rows; i++)
    {
        //stars
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        //spaces
        for(int k=1; k<=rows-i;k++){
            cout << " ";
        }

        for(int k=1; k<=rows-i;k++){
            cout << " ";
        }

        //stars
        for(int l=1; l<=i; l++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i=rows; i>=1; i--)
    {
        //stars
        for(int j=i; j>=1; j--){
            cout << "*";
        }
        //spaces
        for(int k=rows-i; k>=1;k--){
            cout << " ";
        }

        for(int k=rows-i; k>=1;k--){
            cout << " ";
        }

        //stars
        for(int l=i; l>=1; l--){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}