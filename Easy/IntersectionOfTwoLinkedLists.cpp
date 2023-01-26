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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *pointerA = headA, *pointerB = headB;
        while (pointerA != pointerB) {
            pointerA = pointerA == NULL ? headB : pointerA->next;
            pointerB = pointerB == NULL ? headA : pointerB->next;
        }
        return pointerA;
    }
};