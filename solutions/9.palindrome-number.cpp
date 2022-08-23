/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
  bool isPalindrome(int x) {
    if (x < 0)
      return false;
    deque<int> que;
    while (x >= 10) {
      que.push_front(x % 10);
      x /= 10;
    }
    que.push_front(x % 10);
    while (que.size() > 1) {
      int top = que.front();
      int bottom = que.back();
      que.pop_front();
      que.pop_back();
      if (top != bottom)
        return false;
    }
    return true;
  }
};
// @lc code=end
