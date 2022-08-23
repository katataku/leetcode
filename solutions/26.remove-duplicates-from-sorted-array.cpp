/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
  int INF = 99999;
  int removeDuplicates(vector<int> &nums) {
    int num_removed = 0;
    int tar = nums[0];
    for (int i = 1; i < nums.size(); i++) {
      if (tar == nums[i]) {
        nums[i] = INF;
        num_removed++;
      } else {
        tar = nums[i];
      }
    }
    sort(nums.begin(), nums.end());
    return nums.size() - num_removed;
  }
};
// @lc code=end
