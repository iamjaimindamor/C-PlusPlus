#include <iostream>
using namespace std;

void print(int *arr ,int size){

    for(int k = 0; k<size;k++)
    {
        cout << arr[k] << " ";
    }

    cout<<endl;
}

void countingSort(int *arr,int n){

//1st create frequency table and figure out max - min range
int freq[100000] ={0};
int minVal = INT32_MAX;
int maxVal  = INT32_MIN;
for(int i=0;i<n;i++)
{
    freq[arr[i]]++;
    minVal = min(minVal,arr[i]);
    maxVal = max(maxVal,arr[i]);
}

//2nd update the OG array using Frequency table
for(int i = minVal , j=0; i<=maxVal; i++)
{
    while(freq[i]>0)
    {
        arr[j++] = i;
        freq[i]--;
    }  
}

print(arr,n);
}

int main(){


    int arr[5] = {5,4,3,2,1};

    countingSort(arr,5);

    return 0;
}