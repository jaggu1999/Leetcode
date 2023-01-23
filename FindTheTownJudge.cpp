#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if (trust.size() < n - 1) return -1;
        vector<int> trustCnt(n, 0);
        for (auto it : trust) {
            trustCnt[it[0] - 1]--;
            trustCnt[it[1] - 1]++;
        }
        for (int i = 0; i < n; i++) {
            if (trustCnt[i] == n - 1)  return i + 1;
        }
        return -1;
    }
};