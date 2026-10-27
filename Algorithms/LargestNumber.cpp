#include <iostream>
using namespace std;

void MaxNumber(int *arr,int size){

    int max = 0;

    for(int i = 0; i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    cout << "Largest Number is "<<max;

}

int main(){
    int arr[] = {21,3,24,2,4,45,64,6,46,47,5,76,57};
    int n = sizeof(arr)/sizeof(int);
    MaxNumber(arr,n);
    return 0;
}