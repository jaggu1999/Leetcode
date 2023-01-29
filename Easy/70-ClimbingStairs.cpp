/**
Question Name: 70. Climbing Stairs
Author: Jagadeesh Kumar Ch
Difficulty: Easy
Question Link: https://leetcode.com/problems/climbing-stairs/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) {
            return 1;
        }
        int steps = 2, prevSteps = 1;
        for (int i = 3; i <= n; i++) {
            int temp = steps;
            steps += prevSteps;
            prevSteps = temp;
        }
        return steps;
    }
};