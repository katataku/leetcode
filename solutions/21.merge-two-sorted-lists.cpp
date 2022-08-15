/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
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
  ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
    if (list2 == nullptr)
      return list1;
    if (list1 == nullptr)
      return list2;
    ListNode *ans;
    ListNode *cur_ans;
    ListNode *cur_list1;
    ListNode *cur_list2;

    if (list1->val < list2->val) {
      ans = list1;
      cur_list1 = list1->next;
      cur_list2 = list2;
    } else {
      ans = list2;
      cur_list1 = list1;
      cur_list2 = list2->next;
    }
    cur_ans = ans;
    while (true) {
      if (cur_list2 == nullptr) {
        cur_ans->next = cur_list1;
        break;
      }
      if (cur_list1 == nullptr) {
        cur_ans->next = cur_list2;
        break;
      }
      if (cur_list1->val < cur_list2->val) {
        cur_ans->next = cur_list1;
        cur_list1 = cur_list1->next;
      } else {
        cur_ans->next = cur_list2;
        cur_list2 = cur_list2->next;
      }
      cur_ans = cur_ans->next;
    }
    return ans;
  }
};
// @lc code=end
