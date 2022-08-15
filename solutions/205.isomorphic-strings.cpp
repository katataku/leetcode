/*
 * @lc app=leetcode id=205 lang=cpp
 *
 * [205] Isomorphic Strings
 */

// @lc code=start
class Solution {
public:
  bool isIsomorphic(string s, string t) {
    map<char, char> m;
    set<char> used;
    int n = s.size();

    for (int i = 0; i < n; i++) {
      char tar = s[i];
      map<char, char>::iterator it = m.find(tar);
      if (it == m.end()) {
        if (used.find(t[i]) != used.end())
          return false;
        m[tar] = t[i];
        used.insert(t[i]);
      } else {
        if (m[tar] != t[i])
          return false;
      }
    }
    return true;
  }
};
// @lc code=end
