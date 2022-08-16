/*
 * @lc app=leetcode id=62 lang=cpp
 *
 * [62] Unique Paths
 */

// @lc code=start
class Solution {
public:
  vector<vector<int>> memo;
  int dp(int m, int n) {
    if (memo[m][n] != -1)
      return memo[m][n];
    memo[m][n] = dp(m - 1, n) + dp(m, n - 1);
    return memo[m][n];
  }

  int uniquePaths(int m, int n) {
    memo.assign(m, vector<int>(n, -1));
    for (int i = 0; i < m; i++) {
      memo[i][0] = 1;
    }
    for (int i = 0; i < n; i++) {
      memo[0][i] = 1;
    }
    for (int i = 0; i < min(m - 1, n - 1); i++) {
      dp(i, i);
    }
    return dp(m - 1, n - 1);
  }
};
// @lc code=end
