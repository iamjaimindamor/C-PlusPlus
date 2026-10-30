#include <iostream>
#include <cstring>
using namespace std;

void toLower(char str[],int n){
     for(int i=0; i<n; i++)
     {
        char ch=str[i];

        if(ch>='a' && ch<='z'){
            continue;
        }else{
            str[i] = ch-'A'+'a';
        }
     }
     cout <<"Lower Conversion " <<str << endl;
}

void toUpper(char str[],int n){
    for(int i=0; i<n; i++){
        char ch=str[i];
        if(ch>='A' && ch<='Z'){
            continue;
        }else{
            str[i] = ch - 'a' + 'A';
        }
    }
    cout <<"Upper Conversion " <<str;
}



int main(){

    char word[] = "ApPle";

    toLower(word,strlen(word));
    toUpper(word,strlen(word));

    return 0;
}