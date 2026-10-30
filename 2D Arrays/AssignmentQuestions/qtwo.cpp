#include <iostream>
using namespace std;

void sumOfSecondRow(int nums[][3],int row,int col){

    int rowIndex = 1;
    int sum= 0;
    for(int j=0;j<col;j++){
        sum+=nums[rowIndex][j];
    }

    cout << "Sum of Second Row is " << sum << ".";

}

int main(){

    int nums[3][3]={{1,4,9},{11,4,3},{2,2,3}};

    sumOfSecondRow(nums,3,3);
    
    return 0;
}