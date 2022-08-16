/*
 * @lc app=leetcode id=746 lang=cpp
 *
 * [746] Min Cost Climbing Stairs
 */

// @lc code=start
class Solution {
public:
  map<int, int> m;
  int calc(int n, vector<int> &cost) {
    if (m.find(n) != m.end())
      return m[n];
    if (n == 0 || n == 1)
      m[n] = 0;
    else
      m[n] =
          min(calc(n - 1, cost) + cost[n - 1], calc(n - 2, cost) + cost[n - 2]);
    return m[n];
  }

  int minCostClimbingStairs(vector<int> &cost) {
    return calc(cost.size(), cost);
  }
};
// @lc code=end
