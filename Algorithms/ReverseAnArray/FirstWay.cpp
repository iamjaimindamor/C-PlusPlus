#include <iostream>
using namespace std;

void ReverseThisArray(int *arr,int n){

    int tempArr[n];
    
    //enter value from end of array
    for(int i = n-1; i>=0;i--){
       tempArr[n-i-1] = arr[i];
    }

    //overwrite the original array
    for(int j=0; j<=n-1;j++){
        arr[j]=tempArr[j];
    }
}

void PrintArray(int *ptr , int size){
    cout << "Reversed Array  :";
    for(int i= 0; i<size;i++){
        cout << ptr[i] << " ";
    }
        cout << endl;

}

int main(){
    int arr[] = {12,1243,434,3531,3232 ,223,234,232,76,5,4,646,45,5464,456};
    //reverse an array with using extra space/memory....
    int size = sizeof(arr)/sizeof(int);
    
    cout << "Orginal Array :" ;
    for(int i =0; i<size;i++){
        cout << arr[i] << " ";
    };

    cout << endl;
    ReverseThisArray(arr,size);
    PrintArray(arr,size);
    return 0;
}