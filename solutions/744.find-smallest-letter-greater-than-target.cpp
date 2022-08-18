/*
 * @lc app=leetcode id=744 lang=cpp
 *
 * [744] Find Smallest Letter Greater Than Target
 */

// @lc code=start
class Solution {
public:
  char nextGreatestLetter(vector<char> &letters, char target) {
    vector<char>::iterator itr = letters.begin();
    while (itr != letters.end()) {
      if (*itr <= target)
        itr++;
      else
        return *itr;
    }
    return letters[0];
  }
};
// @lc code=end
