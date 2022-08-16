/*
 * @lc app=leetcode id=733 lang=cpp
 *
 * [733] Flood Fill
 */

// @lc code=start
class Solution {
public:
  deque<pair<int, int>> que;
  vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc,
                                int color) {
    int start_color = image[sr][sc];
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
};
// @lc code=end
