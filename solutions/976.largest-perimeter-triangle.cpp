/*
 * @lc app=leetcode id=976 lang=cpp
 *
 * [976] Largest Perimeter Triangle
 */

// @lc code=start
class Solution {
public:
  int largestPerimeter(vector<int> &nums) {
    int ans = 0;
    for (int i = 0; i < nums.size() - 3; i++) {
      int a = nums[i];
      int b = nums[i + 1];
      int c = nums[i + 2];
      if (c > b) {
        int tmp = c;
        c = b;
        b = tmp;
      }
      if (b > a) {
        int tmp = b;
        b = a;
        b = tmp;
      }
      if (a < b + c)
        ans = max(ans, a + b + c);
    }
    return ans;
  }
};
// @lc code=end
