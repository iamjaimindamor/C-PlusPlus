#include<iostream>
using namespace std;

bool isSorted(int *arr,int size,int i){
    if(i==size-1){
        return true;
    }

    if(arr[i]>arr[i+1]){
        return false;
    }

    return isSorted(arr,size,i+1);
}

int main(){

    int arr[] = {1,2,4,5,7};
    int arr2[] = {1,24,5,6,7};
    int size = sizeof(arr)/sizeof(int);
    int size2 = sizeof(arr)/sizeof(int);

   cout << isSorted(arr,size,0);
   cout << isSorted(arr2,size2,0);

    return 0;
}