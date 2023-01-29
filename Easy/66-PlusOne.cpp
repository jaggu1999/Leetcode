/**
Question Name: 66. Plus One
Author: Jagadeesh Kumar Ch
Difficulty: Easy
Question Link: https://leetcode.com/problems/plus-one/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size(), carry = 1;
        vector<int> ans;
        for (int i = len - 1; i >= 0; i--) {
            digits[i] = (digits[i] + carry) % 10;
            carry = digits[i] == 0 ? 1 : 0;
            if (!carry) return digits;
        }   
        if (carry) digits.insert(digits.begin(), carry % 10);
        return digits;
    }
};