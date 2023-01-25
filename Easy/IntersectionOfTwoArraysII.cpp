#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> cnt;
        for (auto val : nums1) {
            cnt[val]++;
        }
        vector<int> ans;
        for (auto val : nums2) {
            if (cnt.find(val) != cnt.end() && cnt[val] > 0) {
                cnt[val]--;
                ans.push_back(val);
            }
        }
        return ans;
    }
};