/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
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
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    int sum = 0, carry = 0;
    ListNode *ans = nullptr;
    ListNode *cur = ans;
    while (l1 != nullptr || l2 != nullptr) {
      sum = carry;
      if (l1 != nullptr) {
        sum += l1->val;
        l1 = l1->next;
      }
      if (l2 != nullptr) {
        sum += l2->val;
        l2 = l2->next;
      }
      carry = sum / 10;
      sum %= 10;
      if (cur != nullptr) {
        cur->next = new ListNode(sum);
        cur = cur->next;
      } else {
        ans = new ListNode(sum);
        cur = ans;
      }
    }
    if (carry == 1) {
      cur->next = new ListNode(1);
    }
    return ans;
  }
};
// @lc code=end
