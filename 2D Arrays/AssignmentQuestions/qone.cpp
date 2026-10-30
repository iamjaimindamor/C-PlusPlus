#include <iostream>
using namespace std;

void printAll7s(int mat[][3],int row,int col){

    int count =0;
    for(int i=0; i<row; i++){
        for(int j =0; j<col; j++){
            if(mat[i][j]==7){
                count++;
            }
        }
    }

    if(count==0){
        cout << "No Occurences of 7 in Given 2D Array";
    }else{
        cout << "There are " << count << " occurences of 7.";
    }

}

int main(){

    int arr[2][3] = {{4,7,8},{8,8,7}};

    printAll7s(arr,2,3);

    return 0;
}