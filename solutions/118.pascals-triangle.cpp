/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */

// @lc code=start
class Solution {
public:
  void appendVec(vector<vector<int>> &v1, vector<vector<int>> &v2) {
    for (auto item : v2) {
      v1.push_back(item);
    }
  }
  vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ans;
    if (numRows == 1) {
      ans.push_back({1});
    } else if (numRows == 2) {
      ans.push_back({1});
      ans.push_back({1, 1});
    } else {
      ans = generate(numRows - 1);
      vector<int> last_item = ans[ans.size() - 1];
      vector<int> last;
      last.push_back(1);
      for (int i = 0; i < numRows - 2; i++) {
        last.push_back(last_item[i] + last_item[i + 1]);
      }
      last.push_back(1);
      ans.push_back(last);
    }
    return ans;
  }
};
// @lc code=end
