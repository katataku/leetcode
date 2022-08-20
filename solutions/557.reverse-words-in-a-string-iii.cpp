/*
 * @lc app=leetcode id=557 lang=cpp
 *
 * [557] Reverse Words in a String III
 */

// @lc code=start
class Solution {
public:
  string reverseWords(string s) {
    string::iterator pre = s.begin();
    string::iterator itr = find(s.begin(), s.end(), ' ');
    while (itr != s.end()) {
      reverse(pre, itr);
      pre = itr + 1;
      itr = find(itr + 1, s.end(), ' ');
    }
    reverse(pre, itr);
    return s;
  }
};
// @lc code=end
