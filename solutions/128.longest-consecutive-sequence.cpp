/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution {
public:
  struct UnionFind {
    map<int, int> par; // par[i]:iの親の番号　(例) par[3] = 2 : 3の親が2
    map<int, int> size;

    UnionFind(int N) {}

    bool contains(int x) {
      map<int, int>::iterator it = par.find(x);
      return (it != par.end());
    }

    int
    root(int x) { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
      if (par[x] == x)
        return x;
      return par[x] = root(par[x]);
    }

    void unite(int x, int y) { // xとyの木を併合
      int rx = root(x);        // xの根をrx
      int ry = root(y);        // yの根をry
      if (rx == ry)
        return;
      par[rx] = ry;
      size[ry] += size[rx];
    }

    bool same(int x, int y) { // 2つのデータx, yが属する木が同じならtrueを返す
      int rx = root(x);
      int ry = root(y);
      return rx == ry;
    }
  };

  int longestConsecutive(vector<int> &nums) {
    int n = nums.size();
    UnionFind tree(n);

    for (int i = 0; i < n; i++) {
      int tar = nums[i];
      if (!tree.contains(tar)) {
        tree.size[tar] = 1;
        tree.par[tar] = tar;
        if (tree.contains(tar - 1)) {
          tree.unite(tar - 1, tar);
        }
        if (tree.contains(tar + 1)) {
          tree.unite(tar, tar + 1);
        }
      }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
      ans = max(ans, tree.size[nums[i]]);
    }
    return ans;
  }
};
// @lc code=end
