/**
Question Name: 108. Convert Sorted Array to Binary Search Tree
Author: Jagadeesh Kumar Ch
Difficulty: Easy
Question Link: https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
*/

#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* constructBST(int left, int right, vector<int>& nums) {
        if (left > right) return NULL;
        int mid = left + (right - left) / 2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = constructBST(left, mid - 1, nums);
        root->right = constructBST(mid + 1, right, nums);
        return root; 
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int len = nums.size();
        return constructBST(0, len - 1, nums);
    }
};