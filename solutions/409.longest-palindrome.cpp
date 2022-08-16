/*
 * @lc app=leetcode id=409 lang=cpp
 *
 * [409] Longest Palindrome
 */

// @lc code=start
class Solution {
public:
  int longestPalindrome(string s) {
    map<char, int> m;

    for (char c : s) {
      m[c] += 1;
    }
    int ans = 0;
    int mid = 0;
    for (auto c : m) {
      int tar = c.second;

      if (tar % 2 == 1) {
        mid = 1;
        tar -= 1;
      }
      ans += tar;
    }
    return ans + mid;
  }
};
// @lc code=end
