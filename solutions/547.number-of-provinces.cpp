/*
 * @lc app=leetcode id=547 lang=cpp
 *
 * [547] Number of Provinces
 */

// @lc code=start
class Solution {
public:
  struct UnionFind {
    vector<int> par; // par[i]:iの親の番号　(例) par[3] = 2 : 3の親が2

    UnionFind(int N) : par(N) { //最初は全てが根であるとして初期化
      for (int i = 0; i < N; i++)
        par[i] = i;
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
        return; // xとyの根が同じ(=同じ木にある)時はそのまま
      par[rx] =
          ry; // xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
    }

    bool same(int x, int y) { // 2つのデータx, yが属する木が同じならtrueを返す
      int rx = root(x);
      int ry = root(y);
      return rx == ry;
    }
  };

  int findCircleNum(vector<vector<int>> &isConnected) {
    int n = isConnected.size();
    UnionFind tree(n);

    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (isConnected[i][j] == 1) {
          tree.unite(i, j);
        }
      }
    }
    map<int, int> m;
    for (int i = 0; i < n; i++) {
      m[tree.root(i)] = 0;
    }
    return m.size();
  }
};
// @lc code=end
