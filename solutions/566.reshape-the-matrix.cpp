/*
 * @lc app=leetcode id=566 lang=cpp
 *
 * [566] Reshape the Matrix
 */

// @lc code=start
class Solution {
public:
  vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c) {
    int n = mat.size();
    int m = mat[0].size();
    if (n * m != r * c)
      return mat;
    vector<int> nums;
    for (auto row : mat) {
      for (auto item : row) {
        nums.push_back(item);
      }
    }
    vector<vector<int>> ans;
    for (int i = 0; i < r; i++) {
      vector<int> tmp;
      for (int j = 0; j < c; j++) {
        tmp.push_back(nums[i * c + j]);
      }
      ans.push_back(tmp);
    }
    return ans;
  }
};
// @lc code=end
