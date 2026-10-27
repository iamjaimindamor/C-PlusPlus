#include <iostream>
using namespace std;

int main(){

    int rows;
    cout << "Enter the number of rows :" ;
    cin >> rows;

    //outer loop
    for(int i =1; i<=rows; i++){

        //spaces
        for(int j = (rows-i);j>=1;j--)
        {
            cout << " ";
        }

        //numbers
        for(int k=i; k>=1; k--)
        {
            cout << k ;
        }

        for(int l=2; l<=i; l++)
        {
            cout << l;
        }

        cout << endl;

    }

    return 0;
}