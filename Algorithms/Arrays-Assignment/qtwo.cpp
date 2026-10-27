#include <iostream>
using namespace std;

int Search(int *arr,int size,int target){

    //Binary search with twisted logic
    int start = 0;
    int end = size-1;
    
    while(end>=start){

        int mid = (start+end)/2;

        if(arr[mid]==target){
            return mid;
        }else if(arr[start]<=arr[mid]){

           if(arr[start]<=target && arr[mid]>=target){
               end = mid-1;
           }else{
             start = mid+1;
           }

        } else{
            if(arr[mid+1]<= target && target <= arr[end]){
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
    }

    return -1;
}

int main(){

    int arr[] = {4,5,6,7,0,1,2};
    int n = sizeof(arr)/sizeof(int);
    cout << Search(arr,n,0);
    return 0;
}