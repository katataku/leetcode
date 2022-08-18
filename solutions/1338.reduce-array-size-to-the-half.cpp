/*
 * @lc app=leetcode id=1338 lang=cpp
 *
 * [1338] Reduce Array Size to The Half
 */

// @lc code=start
class Solution {
public:
  unordered_map<int, int> m;
  int minSetSize(vector<int> &arr) {
    int init_len = arr.size();
    int sum = init_len;
    for (auto i : arr) {
      m[i] += 1;
    }
    vector<int> list;
    for (auto p : m) {
      list.push_back(p.second);
    }
    sort(list.begin(), list.end());
    int ans = 0;
    while (init_len / 2 < sum) {
      sum -= list[list.size() - 1];
      list.pop_back();
      ans++;
    }
    return ans;
  }
};
// @lc code=end
