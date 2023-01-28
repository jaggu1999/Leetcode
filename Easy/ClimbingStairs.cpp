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