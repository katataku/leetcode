/*
 * @lc app=leetcode id=1905 lang=cpp
 *
 * [1905] Count Sub Islands
 */

// @lc code=start
class Solution {
public:
  int WATER = 0;
  int LAND = 1;
  vector<pair<int, int>> dir_list = {
      pair<int, int>(0, 1), pair<int, int>(0, -1), pair<int, int>(1, 0),
      pair<int, int>(-1, 0)};
  vector<vector<int>> dist;

  bool isIsland(vector<vector<int>> &grid1, vector<vector<int>> &grid2, int x,
                int y) {
    bool ans = true;
    int n = grid1.size();
    int m = grid1[0].size();
    if (grid2[x][y] == WATER)
      return false;
    deque<pair<int, int>> que;
    que.push_back(pair<int, int>(x, y));
    while (que.size() > 0) {
      int tar_x = que.front().first;
      int tar_y = que.front().second;
      que.pop_front();
      if (grid1[tar_x][tar_y] == WATER)
        ans = false;
      for (auto item : dir_list) {
        int next_x = tar_x + item.first;
        int next_y = tar_y + item.second;
        if (0 <= next_x && next_x < n && 0 <= next_y && next_y < m) {
          if (grid2[next_x][next_y] == LAND) {
            grid2[next_x][next_y] = 2;
            que.push_back(pair<int, int>(next_x, next_y));
          }
        }
      }
    }
    return ans;
  }

  int countSubIslands(vector<vector<int>> &grid1, vector<vector<int>> &grid2) {
    int n = grid1.size();
    int m = grid1[0].size();
    int ans = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (grid2[i][j] == LAND) {
          if (isIsland(grid1, grid2, i, j))
            ans++;
        }
      }
    }
    return ans;
  }
};
// @lc code=end
