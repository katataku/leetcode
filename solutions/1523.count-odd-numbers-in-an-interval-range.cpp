/*
 * @lc app=leetcode id=1523 lang=cpp
 *
 * [1523] Count Odd Numbers in an Interval Range
 */

// @lc code=start
class Solution {
public:
  int countOdds(int low, int high) {
    int ans = 0;
    if (low % 2 == 1) {
      ans += 1;
      low += 1;
    }
    if (high % 2 == 1) {
      ans += 1;
      high -= 1;
    }
    ans += (high - low) / 2;
    return ans;
  }
};
// @lc code=end
