/*
Question 3 : Given an integer array nums, return all the triplets [nums[i], nums[j],
nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
Notice that the solution set must not contain duplicate triplets. [ Go to Qs ]
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation:
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.
Input: nums = [0,1,1]
Output: [ ]
Explanation: The only possible triplet does not sum up to 0
 */
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

 vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> ans;

        for (int i = 0; i <nums.size()-3; i++) {
            for (int j = i+1; j <nums.size()-2; j++) {
                for (int k = j+1; k <nums.size()-1; k++) {

                    if((i!=j)&&(i!=k)&&(j!=k)&&(nums[i] + nums[j] + nums[k] == 0)){
                        ans.push_back({nums[i],nums[j],nums[k]});                  
                    }
                    
                }
            }
        }
        return ans;
    }

int main(){

    vector<int> nums = {-1,0,1,2,-1,-4};
    
    sort(nums.begin(),nums.end());

    threeSum(nums);

    return 0;
}