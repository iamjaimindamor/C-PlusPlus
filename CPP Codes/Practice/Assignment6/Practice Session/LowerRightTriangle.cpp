#include <iostream>
using namespace std;

int main(){

    int rows;
    cout << "Enter Number Of Rows : ";
    cin >> rows;

    //Outer Loops
    for(int i =1; i<=rows; i++)
    {
        //spaces
        for(int j=1; j<=(rows-i); j++)
        {
            cout << " ";
        }

        //star
        for(int k=1; k<=i; k++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}