/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
  int lenNode(ListNode *head) {
    int ans = 0;
    while (head != nullptr) {
      head = head->next;
      ans++;
    }
    return ans;
  }

  ListNode *removeNthFromEnd(ListNode *head, int n) {
    ListNode *cur = head;
    int len = lenNode(head);
    while (len - n > 1) {
      len--;
      cur = cur->next;
    }
    if (head == cur) {
      head = cur->next;
    } else {
      if (cur->next == nullptr)
        cur->next = nullptr;
      else
        cur->next = cur->next->next;
    }
    return head;
  }
};
// @lc code=end
