/**
Question Name: 237. Delete Node in a Linked List
Author: Jagadeesh Kumar Ch
Difficulty: Medium
Question Link: https://leetcode.com/problems/delete-node-in-a-linked-list/
*/

#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* nextNode = node->next;
        node->val = nextNode->val;
        node->next = nextNode->next;
        nextNode->next = NULL;
        delete(nextNode);
    }
};