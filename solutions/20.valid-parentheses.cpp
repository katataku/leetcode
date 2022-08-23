/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
  deque<char> que;
  bool isValid(string s) {
    for (auto c : s) {
      if (c == '(' || c == '[' || c == '{') {
        que.push_front(c);
      }
      if (c == ')') {
        char top = que[0];
        que.pop_front();
        if (top != '(')
          return false;
      }
      if (c == '}') {
        char top = que[0];
        que.pop_front();
        if (top != '{')
          return false;
      }
      if (c == ']') {
        char top = que[0];
        que.pop_front();
        if (top != '[')
          return false;
      }
    }
    return (que.size() == 0);
  }
};
// @lc code=end
