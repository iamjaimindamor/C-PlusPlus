/*1657. Determine if Two Strings Are Close

Two strings are considered close if you can attain one from the other using the following operations:

Operation 1: Swap any two existing characters.
For example, abcde -> aecdb
Operation 2: Transform every occurrence of one existing character into another existing character, and do the same with the other character.
For example, aacabb -> bbcbaa (all a's turn into b's, and all b's turn into a's)
You can use the operations on either string as many times as necessary.

Given two strings, word1 and word2, return true if word1 and word2 are close, and false otherwise.

*/
#include <iostream>
using namespace std;

 bool closeStrings(string word1, string word2) {

        if(word1.length() == word2.length()){

            int count1[26] = {0};
            int count2[26] = {0};
            //FREQ COUNT1
            for(int i=0; i<word1.length(); i++){
                count1[word1[i]-'a']++;
            }

            for(int i=0; i<word2.length(); i++){
                count2[word2[i]-'a']++;
            }

            
            for(int i=0; i<26; i++){
                if((count1[i]+count2[i])==1){
                    return false;
                }
              
            }

            return true;

        }else{
            return false;
        }
        
    }

int main(){
    string w1 = "abbzzca";
    string w2 = "babzzcz";

    cout << "Are They Close : " << closeStrings(w1,w2);
    return 0;
}