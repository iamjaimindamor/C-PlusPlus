#include <iostream>
#include <cstring>
using namespace std;

void isPanlindrome(char arr[],int size){

    int st=0;
    int end=size-1;

    while(st<end){
        if(arr[st++]!=arr[end--]){
            cout << "Not A Valid Palindrome";
            return;
        }
    }

    cout << "Valid Palindrome";
    return;

}

int main(){

    char arr[] = "survey";

    isPanlindrome(arr,strlen(arr));

    return 0;
}