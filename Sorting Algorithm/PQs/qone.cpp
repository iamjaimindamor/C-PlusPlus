#include <iostream>
using namespace std;

void print(char *arr,int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void insertionSort(char *arr , int n){

    //assume sorted and unsorted array and first element consider sorted 
    for(int i = 1; i<n; i++)
    {
        int curr = arr[i];
        int prev = i-1;

        while(prev >=0 && arr[prev] > curr)
        {
            swap(arr[prev],arr[prev+1]);
            prev--;
        }

        arr[prev+1] = curr;

    }

    print(arr,n);

}

int main(){

    char ch[] = {'f','b','a','e','c','d'};
    int size = sizeof(ch)/sizeof(char);

    insertionSort(ch,size);

    return 0;
}