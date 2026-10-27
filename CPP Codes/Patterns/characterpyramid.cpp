#include <iostream>
using namespace std;

int main(){

    int row;
    cout << "Enter the row number for our character pyramid : ";
    cin>> row;

    int chr = 65;
    //this is one uses explicit typecasting

    for(int i=1; i<=row; i++){

        for(int j=1; j<=i; j++){

            cout<<(char)chr << " ";
            chr++;
        }
        cout << endl;
    }

    return 0;
}