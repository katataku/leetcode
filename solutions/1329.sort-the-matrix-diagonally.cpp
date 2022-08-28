/*
 * @lc app=leetcode id=1329 lang=cpp
 *
 * [1329] Sort the Matrix Diagonally
 */

// @lc code=start
class Solution {
public:
  void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
  }

  vector<vector<int>> diagonalSort(vector<vector<int>> &mat) {

    int n = mat.size();
    int m = mat[0].size();
    vector<vector<int>> ans(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
      vector<int> tmp;
      int j = 0;
      while (i + j < n && j < m) {
        tmp.push_back(mat[i + j][j]);
        j++;
      }
      sort(tmp.begin(), tmp.end());
      reverse(tmp.begin(), tmp.end());
      j = 0;
      while (i + j < n && j < m) {
        ans[i + j][j] = tmp[tmp.size() - 1];
        tmp.pop_back();
        j++;
      }
    }
    for (int i = 0; i < m; i++) {
      vector<int> tmp;
      int j = 0;
      while (j < n && j + i < m) {
        tmp.push_back(mat[j][i + j]);
        j++;
      }
      sort(tmp.begin(), tmp.end());
      reverse(tmp.begin(), tmp.end());
      j = 0;
      while (j < n && i + j < m) {
        ans[j][i + j] = tmp[tmp.size() - 1];
        tmp.pop_back();
        j++;
      }
    }
    return ans;
  }
};
// @lc code=end
