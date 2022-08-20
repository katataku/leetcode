/*
 * @lc app=leetcode id=1779 lang=cpp
 *
 * [1779] Find Nearest Point That Has the Same X or Y Coordinate
 */

// @lc code=start
class Solution {
public:
  int INF = 999999;
  int nearestValidPoint(int x, int y, vector<vector<int>> &points) {
    vector<int> dist_lst;
    int smallest = INF;
    for (auto item : points) {
      int tar_x = item[0];
      int tar_y = item[1];
      int dist;
      if (x == tar_x)
        dist = abs(y - tar_y);
      else if (y == tar_y)
        dist = abs(x - tar_x);
      else
        dist = INF;
      dist_lst.push_back(dist);
      smallest = min(smallest, dist);
    }
    if (smallest == INF)
      return -1;
    for (int i = 0; i < points.size(); i++)
      if (dist_lst[i] == smallest)
        return i;
    return -1;
  }
};
// @lc code=end
