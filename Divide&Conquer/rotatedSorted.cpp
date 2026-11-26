#include<iostream>
using namespace std;

void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
};

int search(int arr[],int si,int ei,int target){

    if(si>ei){
        return -1;
    }

    int mid = si + (ei-si)/2;

    if(arr[mid]==target){
        return mid;
    }

    if(arr[si]<=arr[mid]){

        if(arr[si]<=target && target<=arr[mid]){
            //left
            return search(arr,si,mid-1,target);
        }else{
            //right
            return search(arr,mid+1,ei,target);
        }
    }else{
        if(arr[mid]<= target && target<=arr[ei]){
            //right
            return search(arr,mid+1,ei,target);
        }else{
            //left
            return search(arr,si,mid-1,target);
        }
    }


}

int main(){
    //[0,1,2,3,4,5,6]
    //[3,4,5,6,0,1,2]

    //modified binary search
    int arr[7] ={3,4,5,6,0,1,2};
    int n =7;

    cout << search(arr,0,n-1,6);
    return 0;
}