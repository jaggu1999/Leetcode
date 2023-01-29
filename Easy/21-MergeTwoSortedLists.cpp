/**
Question Name: 21. Merge Two Sorted Lists
Author: Jagadeesh Kumar Ch
Difficulty: Easy
Question Link: https://leetcode.com/problems/merge-two-sorted-lists/
*/

#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL && list2 == NULL) return NULL;
        ListNode* mergedList = new ListNode(), *head = mergedList;
        while (list1 && list2) {
            if (list1->val <= list2->val) {
                mergedList->next = list1;
                list1 = list1->next;
            }
            else {
                mergedList->next = list2;
                list2 = list2->next;
            }
            mergedList = mergedList->next;
        }
        mergedList->next = list1 ? list1 : list2;
        return head->next;
    }
};