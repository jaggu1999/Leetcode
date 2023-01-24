#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        int sLen = s.size(), tLen = t.size();
        if (sLen != tLen) return false;
        vector<int> cnt(26, 0);
        for (int i = 0; i < sLen; i++) {
            cnt[s[i] - 'a']++;
            cnt[t[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++) {
            if (cnt[i] != 0) return false;
        }
        return true;
    }
};