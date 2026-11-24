#include<iostream>
using namespace std;

int singleNumber(int *nums,int size){

    int ans = 0;
    for(int i=0; i<size;i++){
        ans=ans^nums[i];
        // cout<<(nums[i]^nums[i-1]);
    }

    cout << ans;

}

int main(){
    int arr[] = {1};
    // int arr[] = {2,2,1};
    // int arr[] = {4,1,2,1,2};

    int size = sizeof(arr)/sizeof(int);
    singleNumber(arr,size);
    return 0;
}