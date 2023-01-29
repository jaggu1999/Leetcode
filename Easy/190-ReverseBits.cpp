/**
Question Name: 190. Reverse Bits
Author: Jagadeesh Kumar Ch
Difficulty: Easy
Question Link: https://leetcode.com/problems/reverse-bits/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t num = 0;
        for (int i = 0; i < 32; i++) {
            num = num * 2 + (n & 1);
            n >>= 1;
        }
        return num;
    }
};