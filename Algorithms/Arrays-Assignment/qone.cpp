#include <iostream>
using namespace std;

bool CheckOccurence(int *arr, int size){

    //check first index across all other indices
    for(int i = 0; i<size; i++)
    {
        for(int j = i+1; j<size;j++){

            if(arr[i]==arr[j]){
                return true;
            }
        }
    }

    return false;
}

int main(){
    
    int nums[] = {1,2,3,4};

    int size = sizeof(nums)/sizeof(int);

    cout << CheckOccurence(nums,size);


    return 0;
}