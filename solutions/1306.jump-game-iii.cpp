/*
 * @lc app=leetcode id=1306 lang=cpp
 *
 * [1306] Jump Game III
 */

// @lc code=start
class Solution {
public:
  set<int> s;
  deque<int> que;
  bool canReach(vector<int> &arr, int start) {
    que.push_back(start);
    while (que.size() > 0) {
      int tar = que[0];
      que.pop_front();
      s.insert(tar);
      if (arr[tar] == 0)
        return true;
      int next = tar - arr[tar];
      if (0 <= next && s.count(next) == 0) {
        que.push_back(next);
      }
      next = tar + arr[tar];
      if (next < arr.size() && s.count(next) == 0) {
        que.push_back(next);
      }
    }
    return false;
  }
};
// @lc code=end
