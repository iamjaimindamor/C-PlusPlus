#include <iostream>
#include <string>
using namespace std;

void isAnagram(string str1,string str2){

    if(str1.length() == str2.length()){

        int count[26] ={0};
        //create frequency table using string 1
        for(int i=0;i<str1.length();i++){
            count[str1[i]-'a']++;
        }
        
        //check and deduct from counting frequency
        for(int i=0;i<str2.length();i++){
            
            if(count[str2[i]-'a'] == 0){
                cout << "Not an Anagram.";
                return;
            }

            count[str2[i]-'a']--;
        }

        cout << "Valid Anagram";

        return;
        
    }else{
        cout << "Not an Anagram.";
        return;
    }
}

int main(){
    string strA = "cat";
    // cout << "Enter string A for anagram check : ";
    // getline(cin,strA);
    string strB = "fob";
    // cout << "Enter string A for anagram check : ";
    // getline(cin,strB);
    isAnagram(strA,strB);
    return 0;
}