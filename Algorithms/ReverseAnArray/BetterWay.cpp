#include <iostream>
using namespace std;

void ReverseArray(int *arr,int n){

    // 2 pointer array
    int start = 0 , end = n-1;

    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

};

void PrintArray(int *ptr , int size){
    cout << "\nReversed Array  :";
    for(int i= 0; i<size;i++){
        cout << ptr[i] << " ";
    }
        cout << endl;

}

//Space Complexity O(1);
//Time Complexity O(n);

int main(){

    int arr[] = {12,1243,434,3531,3232 ,223,234,232,76,5,4,646,45,5464,456};
    //reverse an array without using extra space/memory....
    int size = sizeof(arr)/sizeof(int);
    
    cout << "Orginal Array :" ;
    for(int i =0; i<size;i++){
        cout << arr[i] << " ";
    };

    ReverseArray(arr,size);
    PrintArray(arr,size);
    return 0;
}