#include <iostream>
using namespace std;

void print(int *arr, int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void countingSort(int* arr,int n){

    //create frequency table and intialize min and max value

    int freq[100000] = {0};
    int minVal = INT32_MAX;
    int maxVal= INT32_MIN;
    for(int i=0; i< n; i++)
    {
        freq[arr[i]]++;
        minVal = min(minVal,arr[i]);
        maxVal = max(maxVal,arr[i]);
    }

    for(int i=maxVal,j=0;i>=minVal;i--)
    {
        while(freq[i]>0){
            arr[j++] = i;
            freq[i]--;
        }
    }


    print(arr,n);
}

int main(){

    int arr[]={3,6,2,1,8,7,4,5,3,1};
    int size = sizeof(arr)/sizeof(int);

    countingSort(arr,size);

    return 0;
}