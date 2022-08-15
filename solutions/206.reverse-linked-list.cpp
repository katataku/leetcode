/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
 */

// @lc code=start
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
  void appendList(ListNode *node, ListNode *tail) {
    while (node->next != nullptr)
      node = node->next;
    node->next = tail;
  }

  ListNode *reverseList(ListNode *head) {
    if (head == nullptr)
      return nullptr;
    if (head->next == nullptr)
      return head;
    ListNode *ans = reverseList(head->next);
    head->next = nullptr;
    appendList(ans, head);
    return ans;
  }
};
// @lc code=end
