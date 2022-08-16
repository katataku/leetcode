/*
 * @lc app=leetcode id=1672 lang=cpp
 *
 * [1672] Richest Customer Wealth
 */

// @lc code=start
class Solution {
public:
  int maximumWealth(vector<vector<int>> &accounts) {
    int ans = -1;
    for (auto vec : accounts) {
      ans = max(ans, accumulate(vec.begin(), vec.end(), 0));
    }
    return ans;
  }
};
// @lc code=end
