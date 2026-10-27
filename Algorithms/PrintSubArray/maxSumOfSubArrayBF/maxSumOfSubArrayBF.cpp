#include <iostream>
using namespace std;

// O(n^3)
void maxSumOfSubArray(int *arr,int size){

    int maxSum = INT32_MIN;

    for(int start =0; start<size; start++){

        for(int end =start; end<size; end++){

            int currSum =0;
            for(int i=start; i<=end; i++){
                currSum += arr[i];
            }

            maxSum = max(currSum,maxSum);
        }
    }

    cout << "Maximum Sum is " << maxSum;

}


// O(n^2)
void maxSumOfSubArray2(int *arr,int size){

    int maxSum = INT32_MIN;

    for(int start =0; start<size; start++){

        int currSum =0;

        for(int end =start; end<size; end++){

            currSum += arr[end];

            maxSum = max(currSum,maxSum);
        }
    }

    cout << "Maximum Sum is " << maxSum;

}

//Kadance Algorithm //O(n) Time Complexity

void maxSumOfSubArray3(int *arr,int size){
    int currSum =0;
    int maxSum = INT32_MIN;

    for(int start =0; start<size; start++){

       currSum+=arr[start];
       maxSum = max(currSum,maxSum);
       if(currSum < 0){
        currSum = 0;
       } 
    }

    cout << "Maximum Sum is " << maxSum;

}

int main(){

    int arr[] = {2,-3,6,-5,4,2};

    int size = sizeof(arr)/sizeof(int);

    maxSumOfSubArray3(arr,size);

    return 0;
}