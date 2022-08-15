/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution {
public:
  int searchInsert(vector<int> &nums, int target) {
    if (target <= nums[0])
      return 0;
    int n;
    int max = nums.size();
    int min = 0;
    while (max - min != 1) {
      n = (max + min) / 2;
      if (nums[n] >= target) {
        max = n;
      } else {
        min = n;
      }
    }
    return max;
  }
};
// @lc code=end
