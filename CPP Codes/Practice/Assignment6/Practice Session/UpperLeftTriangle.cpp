#include <iostream>
using namespace std;

int main(){

    int rows;
    cout << "Enter Number of rows : ";
    cin >> rows;

    //Outer Loop
    for(int i = 1; i<=rows; i++)
    {
        //stars
        for(int j = (rows-i+1); j>=1; j--)
        {
            cout << "*";
        }

        cout << endl;
    }


    return 0;

}