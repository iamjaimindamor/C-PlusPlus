#include<iostream>
using namespace std;

int LinearSearch(int *arr ,int n , int key){

    for(int i = 0; i<n;i++){

        if(arr[i]==key){

            cout << "The Value " << key << " is at "<<i <<" index.";

            return i;
        }

    }

    cout << "The Value Does Not Exist.";
    return -1;

}


int main(){
    int arr[] = {12,1243,434,3531,3232 ,223,234,232,76,5,4,646,45,5464,456};
    int n = sizeof(arr)/sizeof(int);
    LinearSearch(arr,n,1243);
    return 0;
}