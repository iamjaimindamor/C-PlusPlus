//Brute Force Search in Sorted Matrix
#include <iostream>
using namespace std;

int search(int mat[][4],int row,int col,int key){

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){

            if(mat[i][j] == key){
                cout << "KEY : "<< key <<" FOUND AT INDEX ("<< i <<","<< j<<").";
                return 0;
            }

        }
    }

    cout << "Key Not Found -1";
    return -1;
}

int main(){

    int mat[4][4] = {
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50}
    };

    search(mat,4,4,33);
    return 0;
}