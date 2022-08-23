/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
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
  bool isPalindrome(ListNode *head) {
    deque<int> que;
    while (head != nullptr) {
      que.push_back(head->val);
      head = head->next;
    }
    while (que.size() > 1) {
      int top = que.front();
      int bottom = que.back();
      if (top != bottom) {
        return false;
      }
      que.pop_front();
      que.pop_back();
    }
    return true;
  }
};
// @lc code=end
