#include <iostream>
using namespace std;

void maxProductOfSubArray3(int *arr,int size){
    int currProd =1;
    int maxProd = INT32_MIN;

    for(int start =0; start<size; start++){

       currProd*=arr[start];
       maxProd = max(currProd,maxProd);
       if(currProd < 0){
        currProd = 1;
       } 
    }

    cout << "Maximum Product is " << maxProd;

}

int main(){

    int arr[] = {-2,0,-1};
    int size = sizeof(arr)/sizeof(int);
    maxProductOfSubArray3(arr,size);
    return 0;
}