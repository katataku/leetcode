/*
 * @lc app=leetcode id=200 lang=cpp
 *
 * [200] Number of Islands
 */

// @lc code=start
class Solution {
public:
  deque<pair<int, int>> que;
  vector<vector<char>> floodFill(vector<vector<char>> &image, int sr, int sc,
                                 char color) {
    char start_color = image[sr][sc];
    int tar_r;
    int tar_c;
    que.push_back(pair<int, int>(sr, sc));
    while (que.size() > 0) {
      tar_r = que.back().first;
      tar_c = que.back().second;
      que.pop_back();
      if (image[tar_r][tar_c] != color) {
        image[tar_r][tar_c] = color;
        if (tar_r > 0 && image[tar_r - 1][tar_c] == start_color)
          que.push_back(pair<int, int>(tar_r - 1, tar_c));
        if (tar_c > 0 && image[tar_r][tar_c - 1] == start_color)
          que.push_back(pair<int, int>(tar_r, tar_c - 1));
        if (tar_r < image.size() - 1 && image[tar_r + 1][tar_c] == start_color)
          que.push_back(pair<int, int>(tar_r + 1, tar_c));
        if (tar_c < image[0].size() - 1 &&
            image[tar_r][tar_c + 1] == start_color)
          que.push_back(pair<int, int>(tar_r, tar_c + 1));
      }
    }
    return image;
  }
  int numIslands(vector<vector<char>> &grid) {
    int ans = 0;
    for (int i = 0; i < grid.size(); i++) {
      for (int j = 0; j < grid[0].size(); j++) {
        if (grid[i][j] == '1') {
          ans++;
          floodFill(grid, i, j, '0');
          j++;
        }
      }
    }
    return ans;
  }
};
// @lc code=end
