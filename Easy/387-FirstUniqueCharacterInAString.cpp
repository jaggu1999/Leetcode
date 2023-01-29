/**
Question Name: 387. First Unique Character in a String
Author: Jagadeesh Kumar Ch
Difficulty: Easy
Question Link: https://leetcode.com/problems/first-unique-character-in-a-string/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> cnt;
        int len = s.size();
        for (int i = 0; i < len; i++) {
            cnt[s[i]]++;
        }
        for (int i = 0; i < len; i++) {
            if (cnt[s[i]] == 1) return i;
        }
        return -1;
    }
};