/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
class Solution {
public:
  vector<int> searchRange(vector<int> &nums, int target) {
    vector<int> ans;
    if (nums.size() == 0 || nums[0] > target ||
        nums[nums.size() - 1] < target) {
      ans.push_back(-1);
      ans.push_back(-1);
      return ans;
    }
    int left_left = -1;
    int right_left = -1;
    int right_right = nums.size();
    int left_right = nums.size();
    while (left_right - left_left > 1) {
      int mid = (left_right + left_left) / 2;
      if (nums[mid] >= target) {
        left_right = mid;
      } else {
        left_left = mid;
        right_left = mid;
      }
    }
    while (right_right - right_left > 1) {
      int mid = (right_right + right_left) / 2;
      if (nums[mid] > target) {
        right_right = mid;
      } else {
        right_left = mid;
      }
    }
    if (left_right > right_left) {
      left_right = -1;
      right_left = -1;
    }
    ans.push_back(left_right);
    ans.push_back(right_left);
    return ans;
  }
};
// @lc code=end
