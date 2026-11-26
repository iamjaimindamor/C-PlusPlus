#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[],int start,int mid,int end){

    vector<int> temp;
    int i = start;
    int j = mid+1;

    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
        }
    }

    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    
    while(j<=end){
        temp.push_back(arr[j++]);
    }

    for(int si=start,x=0;si<=end;si++){
        arr[si] = temp[x++];
    }

}

void Print(int arr[],int size){
    for(int i=0; i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void mergeSort(int arr[],int start,int end){

    if(start>=end){
        return ;
    }

    int mid = start + (end-start)/2;

    //left
    mergeSort(arr,start,mid);

    //right
    mergeSort(arr,mid+1,end);

    merge(arr,start,mid,end);

}


int main(){

    int arr[] = {6,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(int);

    mergeSort(arr,0,size-1);
    Print(arr,size);

    return 0;
}