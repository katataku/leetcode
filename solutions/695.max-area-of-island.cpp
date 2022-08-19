/*
 * @lc app=leetcode id=695 lang=cpp
 *
 * [695] Max Area of Island
 */

// @lc code=start
class Solution {
public:
  vector<pair<int, int>> dir;
  deque<pair<int, int>> que;
  int countArea(vector<vector<int>> &grid, int r, int c) {
    int ans = 0;
    que.push_back(pair<int, int>(r, c));
    while (que.size() > 0) {
      int tar_r = que.front().first;
      int tar_c = que.front().second;
      que.pop_front();
      if (grid[tar_r][tar_c] == 0)
        continue;
      ans++;
      grid[tar_r][tar_c] = 0;
      for (auto item : dir) {
        int next_r = tar_r + item.first;
        int next_c = tar_c + item.second;
        if (0 <= next_r && next_r < grid.size() && 0 <= next_c &&
            next_c < grid[0].size() && grid[next_r][next_c] == 1) {
          que.push_back(pair<int, int>(next_r, next_c));
        }
      }
    }
    return ans;
  }

  int maxAreaOfIsland(vector<vector<int>> &grid) {
    int ans = 0;
    dir.push_back(pair(1, 0));
    dir.push_back(pair(-1, 0));
    dir.push_back(pair(0, 1));
    dir.push_back(pair(0, -1));
    for (int i = 0; i < grid.size(); i++) {
      for (int j = 0; j < grid[0].size(); j++) {
        if (grid[i][j] == 1)
          ans = max(ans, countArea(grid, i, j));
      }
    }
    return ans;
  }
};
// @lc code=end
