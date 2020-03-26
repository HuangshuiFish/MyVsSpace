/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
 */

// @lc code=start
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
    ListNode* reverseList(ListNode* head)
    {
        if (!head) {
            return nullptr;
        }
        ListNode* first  = head;
        ListNode* target = head->next;
        while (target != nullptr) {
            ListNode* temp;
            temp         = target->next;
            first->next  = target->next;
            target->next = head;
            head         = target;
            target       = temp;
        }
        return head;
    }
};
// @lc code=end
