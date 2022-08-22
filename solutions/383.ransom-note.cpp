/*
 * @lc app=leetcode id=383 lang=cpp
 *
 * [383] Ransom Note
 */

// @lc code=start
class Solution {
public:
  unordered_map<char, int> mp;
  bool canConstruct(string ransomNote, string magazine) {
    for (auto c : magazine) {
      mp[c] += 1;
    }
    for (auto c : ransomNote) {
      if (mp[c] == 0)
        return false;
      mp[c] -= 1;
    }
    return true;
  }
};
// @lc code=end
