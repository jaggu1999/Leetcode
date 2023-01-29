/**
Question Name: 268. Missing Number
Author: Jagadeesh Kumar Ch
Difficulty: Easy
Question Link: https://leetcode.com/problems/missing-number/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n * (n + 1) / 2;
        for (auto val : nums) {
            sum -= val;
        }
        return sum;
    }
};