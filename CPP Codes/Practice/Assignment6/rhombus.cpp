#include <iostream>
using namespace std;

int main(){

    // int rows;
    // cout << "Enter Number Of Rows : ";
    // cin >> rows;

    // for(int i=1; i<=rows; i++)
    // {
    //     //spaces
    //     for(int j=(rows-i);j>=1;j--){
    //         cout << " ";
    //     }

    //     //stars 
    //     for(int k=1; k<=i; k++){
    //         cout << "*";
    //     }

    //     for(int j=(rows-i);j>=1;j--){
    //         cout << "*";
    //     }

    //     cout << endl;
    // }


    int n = 5;
for(int i=0; i<n; i++) {
//spaces
for(int j=1; j<n-i; j++) {
cout << "1";
}
//stars
for(int j=0; j<n; j++) {
cout << "*";
}
cout << endl;
}
    return 0;
}