#include<iostream>
using namespace std;

void removeDuplicates(string str,string ans,int i,int map[26]){

    if(i == str.size()){
        cout << "ans : "<<ans;
        return;
    }

    char ch = str[i];
    int idx = (int)(ch-'a');

    if(map[idx]){
        //duplicate
        removeDuplicates(str,ans,i+1,map);
    }else{
        //no duplicate
        map[idx] = true;
        removeDuplicates(str,ans+ch,i+1,map);
    }

};

int main(){
    // string str = "appnnacollege";
    string str = "aaaaaaabbbbbbb";

    int map[26] = {false};
    string ans = "";
    removeDuplicates(str,ans,0,map);
    return 0;
}