/*
 * @lc app=leetcode id=77 lang=cpp
 *
 * [77] Combinations
 */

// @lc code=start
class Solution {
public:
  vector<vector<int>> combine(int n, int k) {
    if (n == k) {
      vector<int> ans;
      for (int i = 0; i < n; i++) {
        ans.push_back(i + 1);
      }
      return {ans};
    }
  }
};
// @lc code=end
