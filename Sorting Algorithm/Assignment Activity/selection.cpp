#include <iostream>
using namespace std;


void print(int *arr, int size){
    for(int i = 0 ; i < size ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int *arr, int n){

    //outer loop
    for(int i =0; i <n; i++){

        int minIdx = i;

        for(int j = i+1;  j<n; j++)
        {
            if(arr[j]>arr[minIdx]){
                minIdx = j;
            }
        }

        swap(arr[i],arr[minIdx]);

    }

print(arr,n);
}

int main(){

    int arr[] = {3,6,2,1,8,7,4,5,3,1};
    int size = sizeof(arr)/sizeof(int);

    selectionSort(arr,size);

    return 0;
}