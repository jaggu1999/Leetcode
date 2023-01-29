/**
Question Name: 26. Remove Duplicates from Sorted Array
Author: Jagadeesh Kumar Ch
Difficulty: Easy
Question Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size(), k = 1;
        for (int i = 1; i < len; i++) {
            if (nums[i] != nums[i - 1]) {
                nums[k++] = nums[i];
            }
        }
        return k;
    }
};