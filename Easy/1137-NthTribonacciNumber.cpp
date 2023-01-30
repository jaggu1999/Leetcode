/**
Question Name: 1137. Nth Tribonacci Number
Author: Jagadeesh Kumar Ch
Difficulty: Easy
Question Link: https://leetcode.com/problems/n-th-tribonacci-number/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> tribNums = {0, 1, 1};
    void computeTribonacci() {
        for (int i = 3; i <= 37; i++) {
            tribNums.push_back(tribNums[i - 1] + tribNums[i - 2] + tribNums[i - 3]);
        }
    }
    int tribonacci(int n) {
        computeTribonacci();
        return tribNums[n];
    }
};