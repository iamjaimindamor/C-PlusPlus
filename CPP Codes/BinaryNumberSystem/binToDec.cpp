#include <iostream>
using namespace std;

void binToDec(int binNum)
{
    int n = binNum;
    int pow = 1;
    int decNum = 0;

    while(n>0){
        int lastDigit = n%10;
        decNum += pow*lastDigit;
        pow*=2;
        n/=10;
    }

    cout << decNum << endl;
}

void decToBin(int decNum)
{
    int n = decNum;
    int binNum = 0;
    int pow = 1;

    while(n>0){
        int rem = n%2;
        binNum += pow*rem;
        pow*=10;
        n/=2;
    }

    cout << binNum << endl;
}

int main(){

    binToDec(11111);
    decToBin(13);
    return 0;
}