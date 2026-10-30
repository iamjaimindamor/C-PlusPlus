//Question 1 : Count how many times lowercase vowels occurred in a String entered by the user.
#include <iostream>
#include <string>
using namespace std;

int LowerCaseVowelOccurence(string str){

    int vowelCount = 0;
    for(int i=0; i<str.length();i++){

        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            vowelCount++;
        }

    }

    return vowelCount;
}

int main(){
    string str;
    cout << "Enter Any Thing to check lower case vowel occurences : ";
    getline(cin,str);

   cout << "Vowel Count = " << LowerCaseVowelOccurence(str);

    return 0;
}