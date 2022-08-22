/*
 * @lc app=leetcode id=1502 lang=cpp
 *
 * [1502] Can Make Arithmetic Progression From Sequence
 */

// @lc code=start
class Solution {
public:
  bool canMakeArithmeticProgression(vector<int> &arr) {
    sort(arr.begin(), arr.end());
    int diff = arr[1] - arr[0];
    int acc = arr[0] - diff;
    for (auto item : arr) {
      acc += diff;
      if (acc != item)
        return false;
    }
    return true;
  }
};
// @lc code=end
