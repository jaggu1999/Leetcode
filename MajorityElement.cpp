#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        stack<int> stck;
        for (auto val : nums) {
            if (!stck.empty() && stck.top() != val) stck.pop();
            else stck.push(val);
        }
        return stck.top();
    }
};