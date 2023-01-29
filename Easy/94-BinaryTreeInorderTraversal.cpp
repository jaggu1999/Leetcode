/**
Question Name: 94. Binary Tree Inorder Traversal
Author: Jagadeesh Kumar Ch
Difficulty: Easy
Question Link: https://leetcode.com/problems/binary-tree-inorder-traversal/
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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        if (root == NULL) return ans;
        vector<int> leftSubTree;
        vector<int> rightSubTree;
        if (root->left != NULL) leftSubTree = inorderTraversal(root->left);
        for (auto it : leftSubTree) {
            ans.push_back(it);
        }
        ans.push_back(root->val);
        if (root->right != NULL) rightSubTree = inorderTraversal(root->right);
        for (auto it : rightSubTree) {
            ans.push_back(it);
        }
        return ans;
    }
};