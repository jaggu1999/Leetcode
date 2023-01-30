/**
Question Name: 162. Find Peak Element
Author: Jagadeesh Kumar Ch
Difficulty: Medium
Question Link: https://leetcode.com/problems/find-peak-element/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int len = nums.size(), low = 0, high = len - 1;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] < nums[mid + 1]) {
                low = mid + 1;
            }
            else high = mid;
        }
        return low;
    }
};