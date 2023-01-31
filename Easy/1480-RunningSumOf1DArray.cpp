/**
Question Name: 1480. Running Sum of 1d Array
Author: Jagadeesh Kumar Ch
Difficulty: Easy
Question Link: https://leetcode.com/problems/running-sum-of-1d-array/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int len = nums.size();
        vector<int> sum={nums[0]};
        for (int i = 1; i < len; i++) {
            sum.push_back(sum[i - 1] + nums[i]);
        }
        return sum;
    }
};