/*
 * @lc app=leetcode id=392 lang=cpp
 *
 * [392] Is Subsequence
 */

// @lc code=start
class Solution {
public:
  bool isSubsequence(string s, string t) {
    int idx = 0;

    for (auto c : s) {
      while (true) {
        if (idx >= t.size()) {
          return false;
        }
        if (c == t[idx]) {
          idx++;
          break;
        }
        idx++;
      }
    }
    return true;
  }
};
// @lc code=end
