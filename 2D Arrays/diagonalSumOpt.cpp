#include <iostream>
using namespace std;

void diagonalSum(int mat[][4],int n){

    int sum = 0;

    for(int i=0; i<n; i++)
    {
        //primary diagonal
        sum+=mat[i][i];

        //secondary diagonal
        if(i!=n-i-1){
            sum+=mat[i][n-i-1];
        }
        
    }

        cout << "Sum Of Diagonal is " << sum ;

}

int main(){
    int matrix2[4][4] = {{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12},{13,15,15,16}};

    diagonalSum(matrix2,4);
    return 0;
}