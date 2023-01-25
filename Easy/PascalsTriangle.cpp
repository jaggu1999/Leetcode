#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascalsTriangle(numRows, vector<int> ());
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j <= i; j++) {
                if (j == 0 || j == i) pascalsTriangle[i].push_back(1);
                else pascalsTriangle[i].push_back(pascalsTriangle[i - 1][j - 1] + pascalsTriangle[i - 1][j]);
            }
        }
        return pascalsTriangle;
    }
};