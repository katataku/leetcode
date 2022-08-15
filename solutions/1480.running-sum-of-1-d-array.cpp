/*
 * @lc app=leetcode id=1480 lang=cpp
 *
 * [1480] Running Sum of 1d Array
 */

// @lc code=start
class Solution {
public:
  vector<int> runningSum(vector<int> &nums) {
    int acc;
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++) {
      acc += nums[i];
      ans.push_back(acc);
    }
    return ans;
  }
};
// @lc code=end
