/*
 * @lc app=leetcode id=278 lang=cpp
 *
 * [278] First Bad Version
 */

// @lc code=start
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
  int firstBadVersion(int n) {
    long long left = 0;
    long long right = n;

    while (right - left > 1) {
      long long mid = (right + left) / 2;
      if (isBadVersion(mid)) {
        right = mid;
      } else {
        left = mid;
      }
    }
    return right;
  }
};
// @lc code=end
