/**
Question Name: 121. Best Time to Buy and Sell Stock
Author: Jagadeesh Kumar Ch
Difficulty: Easy
Question Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
*/

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