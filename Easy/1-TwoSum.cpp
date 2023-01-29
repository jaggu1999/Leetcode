/**
Question Name: 1. Two Sum
Author: Jagadeesh Kumar Ch
Difficulty: Easy
Question Link: https://leetcode.com/problems/two-sum/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> val;
        int len = nums.size();
        vector<int> ans;
        for (int i = 0; i < len; i++) {
            int searchValue = target - nums[i];
            if (val.find(searchValue) != val.end()) {
                ans.push_back(val[searchValue]);
                ans.push_back(i);
                break;
            }
            val[nums[i]] = i;
        }
        return ans;
    }
};