/*
 * @lc app=leetcode id=1162 lang=cpp
 *
 * [1162] As Far from Land as Possible
 */

// @lc code=start
class Solution {
public:
  int INF = 9999;
  int WATER = 0;
  int LAND = 1;
  vector<pair<int, int>> dir_list = {
      pair<int, int>(0, 1), pair<int, int>(0, -1), pair<int, int>(1, 0),
      pair<int, int>(-1, 0)};
  vector<vector<int>> dist;
  deque<pair<int, int>> que;
  int maxDistance(vector<vector<int>> &grid) {
    int n = grid.size();
    for (int i = 0; i < n; i++) {
      vector<int> tmp = vector<int>(n);
      for (int j = 0; j < n; j++) {
        if (grid[i][j] == LAND) {
          que.push_back(pair<int, int>(i, j));
          tmp[j] = 0;
        } else
          tmp[j] = INF;
      }
      dist.push_back(tmp);
    }
    while (que.size() > 0) {
      int tar_x = que.front().first;
      int tar_y = que.front().second;
      que.pop_front();
      for (auto item : dir_list) {
        int next_x = tar_x + item.first;
        int next_y = tar_y + item.second;
        if (0 <= next_x && next_x < n && 0 <= next_y && next_y < n) {
          if (dist[next_x][next_y] > dist[tar_x][tar_y] + 1) {
            que.push_back(pair<int, int>(next_x, next_y));
            dist[next_x][next_y] = dist[tar_x][tar_y] + 1;
          }
        }
      }
    }
    int max_dist = -1;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        max_dist = max(max_dist, dist[i][j]);
      }
    }
    if (max_dist == INF || max_dist == 0) {
      return -1;
    }
    return max_dist;
  }
};
// @lc code=end
