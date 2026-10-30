#include <iostream>
using namespace std;

void rotate(int mat[100][100],int n){

    //Step 1 Find Transpose
    for(int i=0; i<n;i++){
        for(int j=i+1; j<n; j++){
            cout << "Swapping "<< i <<" & "<< j << endl;
            swap(mat[j][i],mat[i][j]);
        }
        cout << endl;
    }

    //Step 2 Reverse the Row
    for(int j=0; j<n; j++)
    {
        int left =0;
        int right=n-1;

        while(left<right){

            swap(mat[j][left],mat[j][right]);
            left++;
            right--;
        }
    }


    //print 
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

}

int main(){

    int mat[100][100] = {{1,2,3},
                         {4,5,6},
                         {7,8,9}};
    rotate(mat,3);
    return 0;
}