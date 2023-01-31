/**
Question Name: 1512. Number of Good Pairs
Author: Jagadeesh Kumar Ch
Difficulty: Easy
Question Link: https://leetcode.com/problems/number-of-good-pairs/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> cnt;
        int goodPairs = 0;
        for (auto val : nums) {
            goodPairs += cnt[val];
            cnt[val]++;
        }
        return goodPairs;
    }
};