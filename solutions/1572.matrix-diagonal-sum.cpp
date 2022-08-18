/*
 * @lc app=leetcode id=1572 lang=cpp
 *
 * [1572] Matrix Diagonal Sum
 */

// @lc code=start
class Solution {
public:
  int diagonalSum(vector<vector<int>> &mat) {
    int n = mat.size();
    int ans = 0;
    for (int i = 0; i < n; i++) {
      ans += mat[i][i];
      if (i != (n - i - 1)) {
        ans += mat[i][n - i - 1];
      }
    }
    return ans;
  }
};
// @lc code=end
