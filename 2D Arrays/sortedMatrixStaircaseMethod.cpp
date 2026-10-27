//Staircase Method for searching in sorted matrix.
#include <iostream>
using namespace std;

int staircaseSearch(int mat[][4],int row, int col , int key){
    int srow = 0;
    int ecol = col-1;

    while(srow < row && ecol>=0){
        int startCell = mat[srow][ecol];

        if(startCell == key){
            cout << "Key Found at ("<<srow <<","<<ecol<<").";
            return 0;
        }else if(startCell<key){
            srow++;
        }else if(startCell>key){
            ecol--;
        }
    }
    cout << "Key Does Not Exists.";
    return -1;

}

int staircaseSearch2(int mat[][4],int row, int col , int key){
    int erow = row-1;
    int scol = 0;

    while(scol<col&& erow>=0){
        int startCell = mat[erow][scol];

        if(startCell == key){
            cout << "Key Found at ("<<erow <<","<<scol<<").";
            return 0;
        }else if(startCell<key){
            scol++;
        }else if(startCell>key){
            erow--;
        }
    }
    cout << "Key Does Not Exists.";
    return -1;

}

//bottom StartCell 

int main(){

    int mat[4][4] = {
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50}
    };

    staircaseSearch2(mat,4,4,40);

    return 0;
}