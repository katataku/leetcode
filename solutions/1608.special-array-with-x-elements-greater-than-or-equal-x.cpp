/*
 * @lc app=leetcode id=1608 lang=cpp
 *
 * [1608] Special Array With X Elements Greater Than or Equal X
 */

// @lc code=start
class Solution {
public:
  int countGt(vector<int> &nums, int target) {
    int count = 0;
    for (auto item : nums) {
      if (item >= target)
        count++;
    }
    return count;
  }

  int specialArray(vector<int> &nums) {
    int left = 0;
    int right = 1001;
    while (right - left > 1) {
      int mid = (right + left) / 2;
      if (countGt(nums, mid) == mid) {
        return mid;
      }
      if (countGt(nums, mid) > mid) {
        left = mid;
      } else {
        right = mid;
      }
    }
    return -1;
  }
};
// @lc code=end
