/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */

// @lc code=start
class Solution {
public:
  bool searchMatrix(vector<vector<int>> &matrix, int target) {
    for (int i = matrix.size() - 1; i >= 0; --i) {
      if (matrix[i][0] > target)
        continue;
      else {
        return (find(matrix[i].begin(), matrix[i].end(), target) !=
                matrix[i].end());
      }
    }
    return false;
  }
};
// @lc code=end
