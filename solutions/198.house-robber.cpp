/*
 * @lc app=leetcode id=198 lang=cpp
 *
 * [198] House Robber
 */

// @lc code=start
class Solution {
public:
  unordered_map<int, int> m;
  int dp(vector<int> &nums, int n) {
    if (m.find(n) != m.end())
      return m[n];
    m[n] = max(nums[n - 1] + dp(nums, n - 2), dp(nums, n - 1));
    return m[n];
  }
  int rob(vector<int> &nums) {
    m[0] = 0;
    m[1] = nums[0];
    return dp(nums, nums.size());
  }
};
// @lc code=end
