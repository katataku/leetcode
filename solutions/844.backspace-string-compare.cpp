/*
 * @lc app=leetcode id=844 lang=cpp
 *
 * [844] Backspace String Compare
 */

// @lc code=start
class Solution {
public:
  bool backspaceCompare(string s, string t) {
    deque<char> q_s;
    deque<char> q_t;

    for (auto c : s) {
      if (c == '#') {
        if (q_s.size() > 0)
          q_s.pop_back();
      } else {
        q_s.push_back(c);
      }
    }

    for (auto c : t) {
      if (c == '#') {
        if (q_t.size() > 0)
          q_t.pop_back();
      } else {
        q_t.push_back(c);
      }
    }

    if (q_s.size() != q_t.size())
      return false;
    int n = q_s.size();
    for (int i = 0; i < n; i++) {
      char x = q_s[i];
      char y = q_t[i];
      if (x != y)
        return false;
    }
    return true;
  }
};
// @lc code=end
