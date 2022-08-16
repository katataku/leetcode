/*
 * @lc app=leetcode id=142 lang=cpp
 *
 * [142] Linked List Cycle II
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
  ListNode *detectCycle(ListNode *head) {
    if (head == nullptr)
      return nullptr;
    set<ListNode *> m;
    m.insert(head);

    while (head->next != nullptr) {
      if (m.count(head->next) != 0) {
        return head->next;
      }
      m.insert(head->next);
      head = head->next;
    }
    return nullptr;
  }
};
// @lc code=end
