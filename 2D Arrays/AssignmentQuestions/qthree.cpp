//Transpose of a matrix
#include <iostream>
using namespace std;

void print(char mat[3][3],int row,int col){

    cout << "After Transpose :" <<endl;
    for(int i=0; i<row; i++){
        for(int j=0;j<col;j++){
            cout << mat[i][j] << " ";
        }

        cout << endl;
    }

}

void Transpose(char mat[3][3],int row,int col){

    char newMat[3][3];
    cout << "Before Transpose :" <<endl;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << mat[i][j] << " ";
            newMat[j][i]=mat[i][j];
        }
        cout << endl;
    }

    print(newMat,3,3);
}


int main(){

    char mat[3][3] = {{'1','2','3'},
                      {'4','5','6'},{
                        '7','8','9'
                      }};
    Transpose(mat,3,3);

    return 0;
}