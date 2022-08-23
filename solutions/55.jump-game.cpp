/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */

// @lc code=start
class Solution {
public:
  vector<int> mp = vector<int>(10000);
  bool canJump(vector<int> &nums) {
    mp[0] = nums[0];
    for (int i = 1; i < nums.size(); i++) {
      if (mp[i - 1] == 0)
        return false;
      mp[i] = max(mp[i - 1] - 1, nums[i]);
    }
    return true;
  }
};
// @lc code=end
