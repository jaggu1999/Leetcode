/**
Question Name: 169. Majority Element
Author: Jagadeesh Kumar Ch
Difficulty: Easy
Question Link: https://leetcode.com/problems/majority-element/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        stack<int> stck;
        for (auto val : nums) {
            if (!stck.empty() && stck.top() != val) stck.pop();
            else stck.push(val);
        }
        return stck.top();
    }
};