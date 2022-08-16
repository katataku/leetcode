/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
  int maxProfit(vector<int> &prices) {
    int min_val = 1000000;
    int ans = 0;

    for (auto p : prices) {
      ans = max(ans, p - min_val);
      min_val = min(min_val, p);
    }
    return ans;
  }
};
// @lc code=end
