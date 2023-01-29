/**
Question Name: 14. Longest Common Prefix
Author: Jagadeesh Kumar Ch
Difficulty: Easy
Question Link: https://leetcode.com/problems/longest-common-prefix/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs[0] == "") return "";
        int len = strs.size(), str0Len = strs[0].size();
        string prefix = "";
        for (int i = 0; i < str0Len; i++) {
            for (int j = 1; j < len; j++) {
                if (strs[j][i] != strs[0][i]) return prefix;
            }
            prefix.append(1, strs[0][i]);
        }
        return prefix;
    }
};