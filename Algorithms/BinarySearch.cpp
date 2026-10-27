#include<iostream>
using namespace std;

//Binary Search Algorithm

int BinarySearch(int *arr,int n,int key){

    //Two pointer approach

    //find the mid first
    int end = n-1;
    int start = 0;
    int count = 0;
    while(end>=start){
        count++;
        cout << "Iteration no. : "<<count << endl;
        int mid = (start+end)/2;
        cout << "Mid is " << mid<< endl;  
        if(arr[mid]==key){
            cout << "The Value " << key << " is at index : "<<mid<< endl;
            return mid;
        }else if(arr[mid]>key){
            cout << " Check First Half " << mid-1<< endl;  
            end = mid-1;
        }else if(arr[mid]<key){
            cout << " Check Second Half " << mid+1<< endl;  
            start=mid+1;
        }
    }
           cout << "The Value Does not exist";
            return -1;
}



int main(){

    //pre-requisite sorted array...
    int arr[] = {12,24,34,122,545,634,655,3455,32345,75654,76474,78683,79332,80203,81234,84124,85647};
    // int arr[] = {24,28,31,35,38,41,42,45,65};

    int size = sizeof(arr)/sizeof(int);

    BinarySearch(arr,size,3455);

    return 0;
}