#include <iostream>
using namespace std;

int main(){

    int rows;
    cout << "Enter Number of Rows : ";
    cin>> rows;

    //Outer Loops
    for(int i=1; i<=rows; i++)
    {
        //spaces
        for(int j = 1; j<=i-1;j++){

            cout << " ";
        }

        //stars
        for(int k = (rows-i+1); k>=1;k--)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}