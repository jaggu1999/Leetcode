/**
Question Name: 350. Intersection of Two Arrays II
Author: Jagadeesh Kumar Ch
Difficulty: Easy
Question Link: https://leetcode.com/problems/intersection-of-two-arrays-ii/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> cnt;
        for (auto val : nums1) {
            cnt[val]++;
        }
        vector<int> ans;
        for (auto val : nums2) {
            if (cnt.find(val) != cnt.end() && cnt[val] > 0) {
                cnt[val]--;
                ans.push_back(val);
            }
        }
        return ans;
    }
};