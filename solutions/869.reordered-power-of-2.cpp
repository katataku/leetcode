/*
 * @lc app=leetcode id=869 lang=cpp
 *
 * [869] Reordered Power of 2
 */

// @lc code=start
class Solution {
public:
  bool reorderedPowerOf2(int n) {
    string n_str = to_string(n);
    sort(n_str.begin(), n_str.end());
    unsigned long long i = 1;
    string i_str = to_string(i);
    while (n_str.size() >= i_str.size()) {
      i_str = to_string(i);
      sort(i_str.begin(), i_str.end());
      if (n_str == i_str) {
        return true;
      }
      i *= 2;
    }
    return false;
  }
};
// @lc code=end
