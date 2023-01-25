#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        for (auto ch : columnTitle) {
            ans = ans * 26 + (ch - 'A' + 1);
        }
        return ans;
    }
};