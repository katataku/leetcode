/*
 * @lc app=leetcode id=1790 lang=cpp
 *
 * [1790] Check if One String Swap Can Make Strings Equal
 */

// @lc code=start
class Solution {
public:
  bool areAlmostEqual(string s1, string s2) {
    vector<vector<char>> diff;
    for (int i = 0; i < s1.length(); i++) {
      if (s1[i] != s2[i]) {
        diff.push_back({s1[i], s2[i]});
      }
    }
    if (diff.size() == 0) {
      return true;
    }
    if (diff.size() == 2 && diff[0][0] == diff[1][1] &&
        diff[0][1] == diff[1][0])
      return true;
    return false;
  }
};
// @lc code=end
