/*
 * @lc app=leetcode id=367 lang=cpp
 *
 * [367] Valid Perfect Square
 */

// @lc code=start
class Solution {
public:
  bool isPerfectSquare(int num) {
    long long left = 1;
    long long right = num;
    while (right - left > 1) {
      long long mid = (right + left) / 2;
      if (mid * mid == num) {
        return true;
      }
      if (mid * mid < num) {
        left = mid;
      } else {
        right = mid;
      }
    }
    return (left * left == num);
  }
};
// @lc code=end
