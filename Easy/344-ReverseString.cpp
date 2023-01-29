/**
Question Name: 344. Reverse String
Author: Jagadeesh Kumar Ch
Difficulty: Easy
Question Link: https://leetcode.com/problems/reverse-string/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int len = s.size();
        for (int i = 0; i < len / 2; i++) {
            swap(s[i], s[len - i - 1]);
        }
    }
};