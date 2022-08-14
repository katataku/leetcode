/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
  string longestCommonPrefix(vector<string> &strs) {
    sort(strs.begin(), strs.end());
    string a = strs[0];
    string b = strs[strs.size() - 1];
    for (int i = 1; i < strs[0].size() + 1; i++) {
      if (a.substr(0, i) == b.substr(0, i)) {
        continue;
      } else {
        return a.substr(0, i - 1);
      }
    }
    return a;
  }
};
// @lc code=end
