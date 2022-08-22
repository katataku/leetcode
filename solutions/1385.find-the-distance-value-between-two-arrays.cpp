/*
 * @lc app=leetcode id=1385 lang=cpp
 *
 * [1385] Find the Distance Value Between Two Arrays
 */

// @lc code=start
class Solution {
public:
  int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d) {
    int ans = 0;
    for (auto i1 : arr1) {
      bool flag = true;
      for (auto i2 : arr2) {
        if (abs(i1 - i2) <= d) {
          flag = false;
          break;
        }
      }
      if (flag)
        ans++;
    }
    return ans;
  }
};
// @lc code=end
