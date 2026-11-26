#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int> arr,int i , int target){

    if(i==arr.size()){
        return -1;
    }

    if(arr[i]==target){
        return i;
    }

    return firstOccurence(arr,i+1,target);

}

int lastOccurence(vector<int> arr,int i,int target){

    if(i==arr.size()){
        return -1;
    }

    int idx = lastOccurence(arr,i+1,target);

    if(idx==-1 && arr[i]==target){
        return i;
    }

    return idx;

}

int main(){
    vector<int> arr= {1,2,3,3,3,4};
    cout << firstOccurence(arr,0,3);
    cout << lastOccurence(arr,0,3);
    

    return 0;
}