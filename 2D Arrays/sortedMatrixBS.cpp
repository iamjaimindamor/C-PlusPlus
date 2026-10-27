//Row/Colwise Binary Search in Sorted Matrix
#include <iostream>
using namespace std;

int binarySearch(int mat[][4],int row,int col,int key){

    //so we row pointer in 2D Array  
    for(int i =0; i<row; i++){

        int scol = 0;
        int ecol = col-1;
        int srow = 0;
        int erow = row-1;
        int start = scol;
        int end = ecol;

        while(start <= end){
            int mid = (start+end)/2;

            if(mat[i][mid] == key ){
                cout << "Key Found at ("<<i <<","<<mid << ")";
                return 0;
            }else if(mat[i][mid]<key){
                start = mid+1;
            }else if(mat[i][mid]>key){
                end = mid -1;
            }
        }
    
    }

    cout << "Key Does not exist";
    return -1;

}

int main(){

    int mat[4][4] = {
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50}
    };

    binarySearch(mat,4,4,39);

    return 0;
}