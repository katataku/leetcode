/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution {
public:
  map<int, int> m;
  int climbStairs(int n) {
    if (m.find(n) != m.end())
      return m[n];
    if (n == 1 || n == 2)
      m[n] = n;
    else
      m[n] = climbStairs(n - 1) + climbStairs(n - 2);

    return m[n];
  }
};
// @lc code=end
