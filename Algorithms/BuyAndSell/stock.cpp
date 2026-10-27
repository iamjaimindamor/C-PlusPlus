#include <iostream>
using namespace std;

int CalculateMaxProfit(int *arr, int size){

    //first calulate buy profit
    int bestBuy[100000];
    bestBuy[0] = INT32_MAX;

    //best buying price considering each day a selling day
    for(int i=1;i<=size;i++){
        bestBuy[i] = min(bestBuy[i-1],arr[i-1]);
    }

    int maxProfit = 0;
    for(int j=0;j<size;j++){

        int profit = arr[j] - bestBuy[j];
        maxProfit = max(maxProfit,profit);
    }
    
    return maxProfit;
}

int main(){

    int prices[]={7,1,5,3,6,4};
    int n = sizeof(prices)/sizeof(int);

    cout << "Max Profit : " << CalculateMaxProfit(prices,n);


    return 0;

}