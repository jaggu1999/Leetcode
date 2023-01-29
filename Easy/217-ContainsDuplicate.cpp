/**
Question Name: 217. Contains Duplicate
Author: Jagadeesh Kumar Ch
Difficulty: Easy
Question Link: https://leetcode.com/problems/contains-duplicate/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> cnt;
        for (auto val : nums) {
            cnt[val]++;
            if (cnt[val] == 2) return true;
        }
        return false;
    }
};