/*
 * @lc app=leetcode id=967 lang=cpp
 *
 * [967] Numbers With Same Consecutive Differences
 */

// @lc code=start
class Solution {
public:
  int lenNum(int n) {
    int ans = 1;
    while (n > 9) {
      n /= 10;
      ans++;
    }
    return ans;
  }

  deque<int> que;
  vector<int> numsSameConsecDiff(int n, int k) {
    vector<int> ans;
    for (int i = 1; i < 10; i++) {
      que.push_back(i);
    }
    while (que.size() > 0) {
      int current = que.front();
      que.pop_front();
      if (n == lenNum(current))
        ans.push_back(current);
      else {
        int current_end = current % 10;
        vector<int> dirs = {-1, 1};
        for (auto dir : dirs) {
          if (k == 0 && dir == 1)
            continue;
          int next = current_end + (dir * k);
          if (0 <= next && next < 10) {
            que.push_back(current * 10 + next);
          }
        }
      }
    }
    return ans;
  }
};
// @lc code=end
