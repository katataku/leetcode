/*
 * @lc app=leetcode id=1232 lang=cpp
 *
 * [1232] Check If It Is a Straight Line
 */

// @lc code=start
class Solution {
public:
  bool checkStraightLine(vector<vector<int>> &coordinates) {
    int x = coordinates[coordinates.size() - 1][0];
    int y = coordinates[coordinates.size() - 1][1];
    coordinates.pop_back();
    int tar_x = coordinates[coordinates.size() - 1][0];
    int tar_y = coordinates[coordinates.size() - 1][1];
    coordinates.pop_back();

    int x_diff = x - tar_x;
    int y_diff = y - tar_y;

    for (auto c : coordinates) {
      tar_x = c[0];
      tar_y = c[1];
      if (y_diff == 0) {
        if (y - tar_y != 0)
          return false;
      } else {
        if (x_diff * (y - tar_y) != (x - tar_x) * y_diff)
          return false;
      }
    }
    return true;
  }
};
// @lc code=end
