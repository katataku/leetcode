/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start
class Solution {
public:
  vector<int> sortedSquares(vector<int> &nums) {
    vector<int> ans;
    for (int i : nums) {
      ans.push_back(i * i);
    }
    sort(ans.begin(), ans.end());
    return ans;
  }
};
// @lc code=end
