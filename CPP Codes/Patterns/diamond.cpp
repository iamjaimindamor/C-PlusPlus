#include <iostream>
using namespace std;

int main(){

    int rows;
    cout <<" Enter Number of rows pick a even number higher than 6 : ";
    cin >> rows;

    int n1 = rows/2;
//upright1;
    for(int i = 1; i<=n1; i++)
    {
        //spaces
        for(int j =1; j<=n1-i; j++)
        {
            cout << " ";
        }

        //stars
        for(int k=1; k<=2*i-1;k++){
            cout << "*";
        }

        cout << endl;
    }
    
    //inverted one
    for(int i = n1; i>=1; i--)
    {
        //spaces
        for(int j =n1-i; j>=1; j--)
        {
            cout << " ";
        }

        //stars
        for(int k=2*i-1; k>=1;k--){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}