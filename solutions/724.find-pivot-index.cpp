/*
 * @lc app=leetcode id=724 lang=cpp
 *
 * [724] Find Pivot Index
 */

// @lc code=start
class Solution {
public:
  int pivotIndex(vector<int> &nums) {
    vector<int> left_list;
    vector<int> right_list;
    int n = nums.size();
    int acc = 0;
    for (int i = 0; i < n; i++) {
      left_list.push_back(acc);
      acc += nums[i];
    }

    for (int i = 0; i < n; i++) {
      acc -= nums[i];
      right_list.push_back(acc);
      if (left_list[i] == acc)
        return i;
    }
    return -1;
  }
};
// @lc code=end
