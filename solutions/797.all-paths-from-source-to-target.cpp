/*
 * @lc app=leetcode id=797 lang=cpp
 *
 * [797] All Paths From Source to Target
 */

// @lc code=start
class Solution {
public:
  template <typename T> void appendVec(vector<T> &v1, vector<T> v2) {
    for (auto item : v2) {
      v1.push_back(item);
    }
  }
  vector<vector<int>> findPath(vector<vector<int>> &graph, vector<int> acc,
                               int node) {
    vector<vector<int>> ans;
    acc.push_back(node);
    if (node == graph.size() - 1) {
      ans.push_back(acc);
      return ans;
    }
    for (auto next : graph[node]) {
      appendVec(ans, findPath(graph, acc, next));
    }
    return ans;
  }

  vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &graph) {
    return findPath(graph, {}, 0);
  }
};
// @lc code=end
