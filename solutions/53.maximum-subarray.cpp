/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
public:
  int maxSubArray(vector<int> &nums) {
    int maxsum = INT_MIN;
    int sum = 0;
    for (auto i : nums) {
      sum = max(sum + i, i);
      maxsum = max(maxsum, sum);
    }
    return maxsum;
  }
};
// @lc code=end
