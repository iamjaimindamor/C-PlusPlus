//Convert 1D to 2D array
#include <iostream>
using namespace std;

void print (int mat[][2] ){

}

int construct2DArray(int* mat,int size,int row,int col)
{
    int row1 = row;
    int col2 = col;
    int newArray[row1][col2];

    //WHEN IT IS POSSIBLE? THERE MUST BE SUFFICIENT ELEMENT AVAILABLE FIRST SO FOR M X N MATRIX THERE SHOULD BE ATLEAST M*N ELEMENTS AVAILABLE
    if(size == row*col){
        //Sufficient Element are available
        for(int i=0,k=0; i<row; i++){
            for(int j=0; j<col;j++){
                newArray[i][j] = mat[k++];
                cout << newArray[i][j] << " ";  
            }
            cout << endl;
        }

        cout << "Conversion Complete";
        return 0;
    }else{
        cout << "Impossible To Convert it to 2D.";
        return -1;
    }
}

int main(){

    int arr[] = {1,2,};
    int size = sizeof(arr)/sizeof(int);
    construct2DArray(arr,size,1,1);


    return 0;
}
