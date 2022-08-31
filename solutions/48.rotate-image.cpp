/*
 * @lc app=leetcode id=48 lang=cpp
 *
 * [48] Rotate Image
 */

// @lc code=start
class Solution {
public:
  void rotate(vector<vector<int>> &matrix) {
    int n = matrix.size();
    vector<vector<bool>> isRoteted(n, vector<bool>(n, false));
    for (int i = 0; i < n; i++) {
      for (int j = i; j < n; j++) {
        if (!isRoteted[i][j]) {
          int tmp = matrix[i][j];
          matrix[i][j] = matrix[n - 1 - j][i];
          matrix[n - 1 - j][i] = matrix[n - 1 - i][n - 1 - j];
          matrix[n - 1 - i][n - 1 - j] = matrix[j][n - 1 - i];
          matrix[j][n - 1 - i] = tmp;
          isRoteted[i][j] = true;
          isRoteted[n - 1 - j][i] = true;
          isRoteted[n - 1 - i][n - 1 - j] = true;
          isRoteted[j][n - 1 - i] = true;
        }
      }
    }
  }
};
// @lc code=end
