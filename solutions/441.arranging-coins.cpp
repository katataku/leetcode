/*
 * @lc app=leetcode id=441 lang=cpp
 *
 * [441] Arranging Coins
 */

// @lc code=start
class Solution {
public:
  int arrangeCoins(int n) {
    long long left = 0;
    long long right = n / 2;
    right += 2;
    while (right - left > 1) {
      long long mid = (right + left) / 2;
      if ((mid * (mid + 1) / 2) <= n) {
        left = mid;
      } else {
        right = mid;
      }
    }
    return left;
  }
};
// @lc code=end
