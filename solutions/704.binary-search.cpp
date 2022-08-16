/*
 * @lc app=leetcode id=704 lang=cpp
 *
 * [704] Binary Search
 */

// @lc code=start
class Solution {
public:
  int search(vector<int> &nums, int target) {
    int left = 0;
    int right = nums.size();

    while (right - left > 1) {
      int mid = (right + left) / 2;
      if (nums[mid] == target)
        return mid;
      if (nums[mid] < target)
        left = mid;
      else
        right = mid;
    }
    if (nums[left] == target)
      return left;
    return -1;
  }
};
// @lc code=end
