/**
Question Name: 326. Power of Three
Author: Jagadeesh Kumar Ch
Difficulty: Easy
Question Link: https://leetcode.com/problems/power-of-three/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) return false;
        double x = log10(n) / log10(3);
        int temp = x;
        return temp == x;
    }
};