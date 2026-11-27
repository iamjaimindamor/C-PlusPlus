#include<iostream>
using namespace std;

void subset(string str,string ans){

    if(str.size()==0){
        cout << ans << endl;
        return ;
    }

    //yes
    subset(str.substr(1,(str.size()-1)),ans+str[0]);

    //no
    subset(str.substr(1,(str.size()-1)),ans);

}


int main(){

    subset("abc"," ");

    return 0;
}