/*
 * @lc app=leetcode id=387 lang=cpp
 *
 * [387] First Unique Character in a String
 */

// @lc code=start
class Solution {
public:
  int firstUniqChar(string s) {
    string alp = "abcdefghijklmnopqrstuvwxyz";
    int inf = 1000000000;
    int ans = inf;
    for (auto c : alp) {
      if (s.find(c) != string::npos && s.find(c) == s.rfind(c)) {
        int pos = s.find(c);
        ans = min(ans, pos);
      }
    }
    if (ans == inf)
      ans = -1;
    return ans;
  }
};
// @lc code=end
