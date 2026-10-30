#include <iostream>
#include <cstring>
using namespace std;

void reverse(char word[],int n){
    int st =0;
    int end = n-1;
    while(st<=end){
        swap(word[st++],word[end--]);
    }

    cout <<endl<<word << endl;
}

int main(){
    char word[30];
    cout << "Enter The String to Reverse : ";
    cin.getline(word,30);

    reverse(word,strlen(word));

    return 0;
}