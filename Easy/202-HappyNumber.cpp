/**
Question Name: 202. Happy Number
Author: Jagadeesh Kumar Ch
Difficulty: Easy
Question Link: https://leetcode.com/problems/happy-number/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int next(int n) {
        int num = 0;
        while (n > 0) {
            num += pow((n%10), 2);
            n /= 10;
        } 
        return num;
    }
    bool isHappy(int n) {
        int slow = n, fast = next(n);
        while (fast != 1 && fast != slow) {
            slow = next(slow);
            fast = next(next(fast));
        }
        return fast == 1;
    }
};