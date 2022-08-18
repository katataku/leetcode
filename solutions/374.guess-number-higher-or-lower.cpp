/*
 * @lc app=leetcode id=374 lang=cpp
 *
 * [374] Guess Number Higher or Lower
 */

// @lc code=start
/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
  int guessNumber(int n) {
    unsigned int left = 0;
    unsigned int right = n;
    while (right - left > 1) {
      unsigned int tar = (right + left) / 2;
      int ret = guess(tar);
      if (ret == 0)
        return tar;
      if (ret > 0) {
        left = tar;
      } else {
        right = tar;
      }
    }
    if (guess(left) == 0)
      return left;
    else
      return right;
  }
};
// @lc code=end
