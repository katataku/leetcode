/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {
public:
  int mySqrt(int x) {
    unsigned long long left = 0;
    unsigned long long right = x;
    right += 1;
    while (right - left > 1) {
      unsigned long long mid = (right + left) / 2;
      if (mid > x / mid) {
        right = mid;
      } else {
        left = mid;
      }
    }
    return left;
  }
};
// @lc code=end
