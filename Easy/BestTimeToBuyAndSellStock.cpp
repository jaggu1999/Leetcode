#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX, profit = 0;
        for (auto val : prices) {
            profit = max(profit, val - minPrice);
            minPrice = min(minPrice, val);
        }
        return profit;
    }
};