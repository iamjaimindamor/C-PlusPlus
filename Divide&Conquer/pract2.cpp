#include<iostream>
using namespace std;

int partition(int arr[],int start,int end){

    int i = start-1;
    int pivot = arr[end];
    for(int j=start;j<end;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }

    i++;
    swap(arr[i],arr[end]);

    return i;

};

void Print(int arr[],int size){
    for(int i=0; i<size;i++){
        cout << arr[i] << " ";
    }
    cout <<endl;
}


void quickSort(int arr[],int start,int end){

    if(start>=end){
        return;
    }

    int pivotIdx = partition(arr,start,end);

    quickSort(arr,start,pivotIdx-1);

    quickSort(arr,pivotIdx+1,end);

}

int main(){

    int arr[] = {6,5,3,4,2,1};
    int size = sizeof(arr)/sizeof(int);
    quickSort(arr,0,size-1);
    Print(arr,size);
    return 0;
}