#include <iostream>
using namespace std;

int TotalWaterTrapped(int *heights,int size){

    //Get LeftMax Values (ARRAY DS)
    int leftMax[20000],rightMax[20000];

    //Left Max
    leftMax[0] = heights[0];
    for(int i = 1; i<size; i++){
        leftMax[i] = max(leftMax[i-1],heights[i-1]);
    }

    //Right Max
    rightMax[size -1] = heights[size-1];
    for(int j = size-2; j>=0;j--){
        rightMax[j] = max(rightMax[j+1],heights[j+1]);
    }

    int waterTrapped = 0;
    
    for(int k = 0; k<size; k++){
     int currWaterTrapped = min (leftMax[k],rightMax[k]) - heights[k];
     if(currWaterTrapped>0){
        waterTrapped += currWaterTrapped;
     }   
    }


    return waterTrapped;
}

int main(){
    int heights[]= {4,2,0,6,3,2,5};
    int n = sizeof(heights)/sizeof(int);

    cout << TotalWaterTrapped(heights,n);

    return 0;
}