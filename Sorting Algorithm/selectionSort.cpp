#include <iostream>
using namespace std;

void print(int *arr ,int size){

    for(int k = 0; k<size;k++)
    {
        cout << arr[k] << " ";
    }

    cout<<endl;
}

void selectionSort(int *arr,int n){

    for(int i=0;i<n-1;i++)
    {
        int minIdx = i;

        for(int j =i+1; j < n; j++)
        {
            if(arr[j]<arr[minIdx])
            {
                minIdx = j;
            }
        }
 
        swap(arr[i],arr[minIdx]);
    }

    print(arr,n);

}

int main(){


    int arr[5] = {5,4,3,2,1};

    selectionSort(arr,5);

    return 0;
}