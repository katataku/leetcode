/*
 * @lc app=leetcode id=1020 lang=cpp
 *
 * [1020] Number of Enclaves
 */

// @lc code=start
class Solution {
public:
  int kISLAND = 1;
  vector<vector<int>> dir;
  deque<pair<int, int>> que;

  int isTotalIsland(vector<vector<int>> &grid, int r, int c) {
    bool flag = true;
    int ans = 0;
    que.push_back(pair<int, int>(r, c));
    while (que.size() > 0) {
      int tar_r = que.front().first;
      int tar_c = que.front().second;
      que.pop_front();
      if (grid[tar_r][tar_c] == kISLAND) {
        ans++;
        grid[tar_r][tar_c] = 2;
        for (auto item : dir) {
          int next_r = tar_r + item[0];
          int next_c = tar_c + item[1];
          if (next_r < 0 || grid.size() <= next_r || next_c < 0 ||
              grid[0].size() <= next_c) {
            flag = false;
            continue;
          }
          if (grid[next_r][next_c] == kISLAND)
            que.push_back(pair<int, int>(next_r, next_c));
        }
      }
    }
    return flag ? ans : 0;
  }

  int numEnclaves(vector<vector<int>> &grid) {
    int ans = 0;
    dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    for (int i = 0; i < grid.size(); i++) {
      for (int j = 0; j < grid[0].size(); j++) {
        if (grid[i][j] == kISLAND) {
          ans += isTotalIsland(grid, i, j);
        }
      }
    }
    return ans;
  }
};
// @lc code=end
