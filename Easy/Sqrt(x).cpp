#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if (x <= 1) return x;
        int l = 1, h = x / 2, ans;
        while (l <= h) {
            long long mid = l + (h - l) / 2;
            if (mid * mid == x) return mid;
            else if (mid * mid < x){
                l = mid + 1;
                ans = mid;
            } 
            else h = mid - 1;
        }
        return ans;
    }
};