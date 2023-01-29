#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1, j = n - 1, ind = m + n - 1;
        while (i >= 0 && j >= 0) {
            nums1[ind--] = nums1[i] <= nums2[j] ? nums2[j--] : nums1[i--];
        }
        while (j >= 0) {
            nums1[ind--] = nums2[j--];
        }
    }
};