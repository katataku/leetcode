/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution {
public:
  vector<int> plusOne(vector<int> &digits) {
    int len = digits.size();
    if (len == 0) {
      digits.push_back(1);
      return digits;
    }
    if (digits[len - 1] != 9) {
      digits[len - 1] += 1;
      return digits;
    } else {
      digits.pop_back();
      digits = plusOne(digits);
      digits.push_back(0);
    }
    return digits;
  }
};
// @lc code=end
