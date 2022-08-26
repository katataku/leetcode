/*
 * @lc app=leetcode id=1014 lang=cpp
 *
 * [1014] Best Sightseeing Pair
 */

// @lc code=start
class Solution {
public:
  vector<vector<int>> memo;

  int maxScoreSightseeingPair(vector<int> &values) {
    int ans = -99999;
    int n = values.size();
    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        ans = max(values[i] + values[j] - (j - i), ans);
      }
    }
    return ans;
  }
};
// @lc code=end
