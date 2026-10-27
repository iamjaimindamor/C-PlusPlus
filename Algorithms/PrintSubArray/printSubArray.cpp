#include <iostream>
using namespace std;

void printSubArray(int *arr,int size){

    for(int start =0; start < size; start++){

        for(int end = start; end < size; end++){

            cout << "(" << start << "," << end << ")";

            for(int i=start; i<=end; i++){
                cout << arr[i] << " ";
            }

            cout << endl;

        }
        cout << endl;
    }
}

int main(){
    // int arr[5] = {1,2,3,4,5};
    // int size = 5;

        // int arr[] = {12,24,34,122,545,634,655,3455,32345,75654,76474,78683,79332,80203,81234,84124,85647};
    int arr[] = {24,28,31,35,38,41,42,45,65};

    int size = sizeof(arr)/sizeof(int);

    printSubArray(arr,size);

    return 0;
}