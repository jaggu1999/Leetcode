/**
Question Name: 136. Single Number
Author: Jagadeesh Kumar Ch
Difficulty: Easy
Question Link: https://leetcode.com/problems/single-number/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (auto val : nums) {
            ans ^= val;
        }
        return ans;
    }
};