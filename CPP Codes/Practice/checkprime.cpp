#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int num;
    cout<< "Fetch all prime number between 2 and chose a number : ";
    cin >> num;

    cout << "Great the following are prime numbers between 2 and "<<num<<" :\n";
    //Loop around the range of number 2 to num;
        for(int i =2; i<num; i++){
            bool isPrime = true;

            for(int j =2; j<=sqrt(i);j++){

                if((i%j)==0){
                    isPrime = false;
                }
            }

            if(isPrime){
                cout << i << endl;
            }
        }

      

    return 0;

}