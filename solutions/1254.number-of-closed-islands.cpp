/*
 * @lc app=leetcode id=1254 lang=cpp
 *
 * [1254] Number of Closed Islands
 */

// @lc code=start
class Solution {
public:
  vector<vector<int>> dir;
  deque<pair<int, int>> que;

  bool isTotalIsland(vector<vector<int>> &grid, int r, int c) {
    if (grid[r][c] != 0)
      return false;
    que.push_back(pair<int, int>(r, c));
    bool flag = true;
    while (que.size() > 0) {
      int tar_r = que.front().first;
      int tar_c = que.front().second;
      que.pop_front();
      grid[tar_r][tar_c] = 2;
      for (auto item : dir) {
        int next_r = tar_r + item[0];
        int next_c = tar_c + item[1];
        if (next_r < 0 || grid.size() <= next_r || next_c < 0 ||
            grid[0].size() <= next_c) {
          flag = false;
          continue;
        }
        if (grid[next_r][next_c] == 0)
          que.push_back(pair<int, int>(next_r, next_c));
      }
    }
    return flag;
  }

  int closedIsland(vector<vector<int>> &grid) {
    int ans = 0;
    dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    for (int i = 0; i < grid.size(); i++) {
      for (int j = 0; j < grid[0].size(); j++) {
        if (grid[i][j] == 0) {
          if (isTotalIsland(grid, i, j))
            ans++;
        }
      }
    }
    return ans;
  }
};
// @lc code=end
