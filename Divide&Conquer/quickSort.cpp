#include<iostream>
using namespace std;

int partition(int arr[],int start,int end){

    int i = start-1;

    for(int j =start;j<end;j++){
        if(arr[j]<= arr[end]){
            i++;
            swap(arr[i],arr[j]);
        }
    }

    i++;
    swap(arr[i],arr[end]);

    return i;

};

void quickSort(int arr[],int start,int end){

    if(start>=end){
        return;
    }

    int pivotIdx = partition(arr,start,end);
    quickSort(arr,start,pivotIdx-1);
    quickSort(arr,pivotIdx+1,end);

};

void Print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main(){

    int arr[] ={6,3,7,5,2,4};
    int size = sizeof(arr)/sizeof(int);
    quickSort(arr,0,size-1);
    Print(arr,size);
    return 0;
}