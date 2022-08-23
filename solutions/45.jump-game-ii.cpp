/*
 * @lc app=leetcode id=45 lang=cpp
 *
 * [45] Jump Game II
 */

// @lc code=start
class Solution {
public:
  int INF = 9999999;

  vector<int> mp = vector<int>(10000);
  int canJump(vector<int> &nums) {
    mp[0] = nums[0];
    for (int i = 1; i < nums.size(); i++) {
      if (mp[i - 1] == 0)
        return INF;
      mp[i] = max(mp[i - 1] - 1, nums[i]);
    }
    return true;
  }

  int jump(vector<int> &nums) {
    int ans = 0;
    for (int i = 0; i < nums.size(); i++) {
      if ()
    }
  }
};
// @lc code=end
