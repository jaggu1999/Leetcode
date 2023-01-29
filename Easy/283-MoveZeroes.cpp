/**
Question Name: 283. Move Zeroes
Author: Jagadeesh Kumar Ch
Difficulty: Easy
Question Link: https://leetcode.com/problems/move-zeroes/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len = nums.size(), prev = 0;
        for (int i = 0; i < len; i++) {
            if (nums[i] != 0) {
                swap(nums[prev++], nums[i]);
            }
        }
    }
};