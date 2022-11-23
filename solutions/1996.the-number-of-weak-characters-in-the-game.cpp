/*
 * @lc app=leetcode id=1996 lang=cpp
 *
 * [1996] The Number of Weak Characters in the Game
 */

// @lc code=start
class Solution {
public:
  static bool comp(vector<int> &a, vector<int> &b) {
    if (a[0] == b[0]) {
      return a[1] > b[1];
    }
    return a[0] < b[0];
  }
  int numberOfWeakCharacters(vector<vector<int>> &prop) {
    sort(prop.begin(), prop.end(), comp);
    int maxTillNow = INT_MIN;
    int ans = 0;
    for (int i = prop.size() - 1; i >= 0; i--) {
      if (prop[i][1] < maxTillNow) {
        ans++;
      }
      maxTillNow = max(maxTillNow, prop[i][1]);
    }
    return ans;
  }
};
// @lc code=end