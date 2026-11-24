/*Question 2 : You are given two strings s1 and s2 of equal length. A string swap is an
operation where you choose two indices in a string (not necessarily different) and
swap the characters at these indices.

Return true if it is possible to make both strings equal by performing at most one
string swap on exactly one of the strings. Otherwise, return false.

Example :
Input: s1 = "bank", s2 = "kanb"
Output: true
Explanation: For example, swap the first character with the last character of s2 to
make "bank"

Input s1 ="anagram" s2="nagaram"
output:false
*/
#include <iostream>
using namespace std;

//Attempted Solution
bool singleSwapPossible(string str1,string str2){

    if(str1.length()==str2.length()){
        int maxVar=0;

        for(int i=0; i<str1.length();i++){
            if(str1[i] != str2[i]){
                maxVar++;
            }
        }

        if(maxVar>2){
            // cout << "Not Possible in a single swap.";
            return false;
        }else{
            // cout << "Possible in one swap";
            return true;
        }
    }else{
        cout << "Length Mismatch";
        return false;
    }

}

//Actual Solution
bool areAlmostEqual(string s1,string s2){

    //Length Mismatch Return false;
    if(s1.length()!=s2.length()){
        cout << "Length Mismatch";
        return false;
    }

    char diffChar1 , diffChar2;
    int diff = 0;

    for(int i=0; i<s1.length();i++)
    {
        if(s1[i]!=s2[i]){

            if(!diff){
                diffChar1 = s1[i];
                diffChar2 = s2[i];
            }else{
                if(s1[i]!=diffChar2||s2[i]!=diffChar1){
                    return false;
                }
            }

            diff++;

        }

        if(diff>2){
            return false;
        }
    }

    if(diff == 1){
        return false;
    }

    return true;

}

int main(){

    string s1 = "anagram";
    string s2 = "nagaram";

    cout << "One Swap Action Possible : "<< areAlmostEqual(s1,s2);

    return 0;
}

