/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
  void moveZeroes(vector<int> &nums) {
    int count = 0;
    vector<int>::iterator it = find(nums.begin(), nums.end(), 0);
    while (it != nums.end()) {
      count++;
      nums.erase(it);
      it = find(it, nums.end(), 0);
    }
    for (int i = 0; i < count; i++) {
      nums.push_back(0);
    }
  }
};
// @lc code=end
