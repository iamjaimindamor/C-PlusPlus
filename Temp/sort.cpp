#include<iostream>
using namespace std;

void swap(int *arr,int a,int b){

    int temp = arr[a];
    arr[a]=arr[b];
    arr[b]=temp;

}

void print(int *arr,int size){
    for(int i=0; i<size;i++){
        cout << arr[i] << " ";
    }
}

void bubble_sort(int *arr,int size){
    for(int pass = 1; pass <=size; pass++ ){
        for(int i=1;i<size;i++){
            if(arr[i]<arr[i-1]){
                swap(arr,i,i-1);
            }
        }
    }
    print(arr,size);
}

void insertion_sort(int *arr,int size){
    for(int pass = 1; pass<=size; pass++)
    {
        for(int i = pass - 1; i>0; i--){
            if(arr[i]<arr[i-1])
            {
                swap(arr,i,i-1);
            }
            else break;
        }
    }
    print(arr,size);
}

void selection_sort(int *arr,int size)
{
    for(int pass = 0; pass<size;pass++)
    {
        int minIdx = pass;

        for(int i = pass+1; i<size; i++)
        {
            if(arr[i]<arr[minIdx]){
                minIdx = i;
            }
        }
        swap(arr,pass,minIdx);
    }

    print(arr,size);

}

void counting_sort(int *arr,int size)
{
    //create frequency table
    int freq[100000] = {0};
    int minVal = INT32_MAX;
    int maxVal = INT32_MIN;

    for(int i = 0; i<size; i++)
    {
        freq[arr[i]]++;
        minVal = min(minVal,arr[i]);
        maxVal = max(maxVal,arr[i]);
    }

    for(int i=minVal , j=0; i<=maxVal; i++)
    {
        while(freq[i]>0){
            arr[j++] = i;
            freq[i]--;
        }

    }

    print(arr,size);

}

int main(){

    int arr[] = {50,30,10,20,40};
    int size = sizeof(arr)/sizeof(int);

    counting_sort(arr,size);
    
    return 0;
}