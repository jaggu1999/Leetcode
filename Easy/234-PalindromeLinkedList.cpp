/**
Question Name: 234. Palindrome Linked List
Author: Jagadeesh Kumar Ch
Difficulty: Easy
Question Link: https://leetcode.com/problems/palindrome-linked-list/
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
    void reverseList(ListNode* &node, ListNode* &prev) {
        while (node) {
            ListNode* next = node->next;
            node->next = prev;
            prev = node;
            node = next;
        }
    }
    ListNode* getSecondHalfStartNode(ListNode* node) {
        ListNode* slow = node;
        ListNode* fast = node->next;
        while (fast) {
            if (fast->next && fast->next->next) {
                slow = slow->next;
                fast = fast->next->next;
            }
            else {
                if (fast->next) slow = slow->next;
                break;
            }
        }
        return slow->next;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* secondHalfHead = getSecondHalfStartNode(head);
        ListNode* prev = NULL;
        reverseList(secondHalfHead, prev);
        ListNode* secondHalfHeadRev = prev;
        ListNode* firstHalfHead = head;
        while (secondHalfHeadRev) {
            if (firstHalfHead->val != secondHalfHeadRev->val) {
                return false;
            }
            firstHalfHead = firstHalfHead->next;
            secondHalfHeadRev = secondHalfHeadRev->next;
        }
        ListNode* reversePrev = NULL;
        reverseList(prev, reversePrev);
        return true;
    }
};