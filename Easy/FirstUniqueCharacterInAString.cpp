#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> cnt;
        int len = s.size();
        for (int i = 0; i < len; i++) {
            cnt[s[i]]++;
        }
        for (int i = 0; i < len; i++) {
            if (cnt[s[i]] == 1) return i;
        }
        return -1;
    }
};