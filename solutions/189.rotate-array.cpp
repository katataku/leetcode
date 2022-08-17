/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

// @lc code=start
class Solution {
public:
  void rotate(vector<int> &nums, int k) {
    if (nums.size() < k)
      return rotate(nums, k % nums.size());
    vector<int> tmp;
    for (int i = 0; i < k; i++) {
      tmp.push_back(nums[nums.size() - 1]);
      nums.pop_back();
    }
    nums.insert(nums.begin(), tmp.rbegin(), tmp.rend());
  }
};
// @lc code=end
