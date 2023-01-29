/**
Question Name: 13. Roman to Integer
Author: Jagadeesh Kumar Ch
Difficulty: Easy
Question Link: https://leetcode.com/problems/roman-to-integer/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanNumerals = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int len = s.size(), numerical = 0;
        for (int i = 0; i < len; i++) {
            if (i + 1 < len && romanNumerals[s[i + 1]] > romanNumerals[s[i]]) {
                numerical -= romanNumerals[s[i]];
            }
            else numerical += romanNumerals[s[i]];
        }
        return numerical;
    }
};