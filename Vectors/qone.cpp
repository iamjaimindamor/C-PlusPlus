/*
Question 1 : You have a set of integers, which originally contains all the numbers
from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated
to another number in the set, which results in repetition of one number and loss of
another number.
You are given an integer array nums representing the data status of this set after the
error.
Find the number that occurs twice and the number that is missing and return them in
the form of an array.
Example :
Input: nums = [1,2,2,4]
Output: [2,3]

 */
#include<iostream>
#include<vector>
using namespace std;

vector<int> findErrorNums(vector<int> nums){
    
    //nums = [1,2,2,4];

    vector<int> ans;
    vector<bool> isPresent(nums.size()+1,false);
    //[0,0,0,0,0]

    for(int i=0; i<nums.size();i++)
    {
        if(isPresent[nums[i]])
        {
            ans.push_back(nums[i]);
            continue;
        }

        isPresent[nums[i]] = true;
    }

    for(int j=1; j<isPresent.size();j++){
        if(!isPresent[j]){
            ans.push_back(j);
            break;
        }
    }

    return ans;

}

int main(){

    vector<int> nums = {1,1};
    vector<int> ans = findErrorNums(nums);
    
    for(int i=0; i<ans.size();i++){
        cout << ans[i] << ",";
    }



    return 0;
}